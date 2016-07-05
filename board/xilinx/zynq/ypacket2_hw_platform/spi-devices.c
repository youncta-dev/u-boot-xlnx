#include <common.h>
#include <errno.h>
#include <spi.h>

#include "spi-devices.h"
#include "si5347_config.h"



static int spi_send_receive(int bus, int cs, int mode, uchar* dout, uchar* din, int bitlen)
{
	struct spi_slave *slave;
	int ret = 0;

#ifdef CONFIG_DM_SPI
	char name[30], *str;
	struct udevice *dev;

	snprintf(name, sizeof(name), "generic_%d:%d", bus, cs);
	str = strdup(name);
	ret = spi_get_bus_and_cs(bus, cs, 1000000, mode, "spi_generic_drv", str, &dev, &slave);
	if (ret)
		return ret;
#else
	slave = spi_setup_slave(bus, cs, 1000000, mode);
	if (!slave) {
		printf("Invalid device %d:%d\n", bus, cs);
		return -EINVAL;
	}
#endif

	ret = spi_claim_bus(slave);
	if (ret)
		goto done;
	ret = spi_xfer(slave, bitlen, dout, din, SPI_XFER_BEGIN | SPI_XFER_END);
#ifndef CONFIG_DM_SPI
	/* We don't get an error code in this case */
	if (ret)
		ret = -EIO;
#endif
	if (ret) {
		printf("Error %d during SPI transaction\n", ret);
	} 
done:
	spi_release_bus(slave);
#ifndef CONFIG_DM_SPI
	spi_free_slave(slave);
#endif

	return ret;
}


static void ad9643_write_reg8(u8 addr, u8 val)
{
    u8 tx_buf0[4];
    u8 tx_buf1[4];


    tx_buf0[0] = AD9643_WRITE_DATA_CMD;
    tx_buf0[1] = addr;
    tx_buf0[2] = val;

    spi_send_receive(AD9643_BUS, AD9643_CS, AD9643_MODE, tx_buf0, NULL, 24);  

    // apply configuration
    tx_buf1[0] = 0x00;
    tx_buf1[1] = 0xff;
    tx_buf1[2] = 0x01;

    spi_send_receive(AD9643_BUS, AD9643_CS, AD9643_MODE, tx_buf1, NULL, 24);  

}

static u8 si5347_read_reg8(u16 addr)
{
    u8 tx_buf[4];
    u8 rx_buf[4];


    u8 page = (addr >> 8) & 0xff;
    u8 reg = addr & 0xff;



    // First write page
    tx_buf[0] = SI5347_SET_ADDRESS_CMD;
    tx_buf[1] = SI5347_PAGE_SET_REG;
    tx_buf[2] = SI5347_WRITE_DATA_CMD;
    tx_buf[3] = page;

    spi_send_receive(SI5347_BUS, SI5347_CS, SI5347_MODE, tx_buf, NULL, 32);  

    tx_buf[0] = SI5347_SET_ADDRESS_CMD;
    tx_buf[1] = reg;
    tx_buf[2] = SI5347_READ_DATA_CMD;

    spi_send_receive(SI5347_BUS, SI5347_CS, SI5347_MODE, tx_buf, rx_buf, 32);  

    return rx_buf[3];


}

static void si5347_write_reg8(u16 addr, u8 val)
{
    u8 tx_buf[4];

    u8 page = (addr >> 8) & 0xff;
    u8 reg = addr & 0xff;


    // First write page
    tx_buf[0] = SI5347_SET_ADDRESS_CMD;
    tx_buf[1] = SI5347_PAGE_SET_REG;
    tx_buf[2] = SI5347_WRITE_DATA_CMD;
    tx_buf[3] = page;

    spi_send_receive(SI5347_BUS, SI5347_CS, SI5347_MODE, tx_buf, NULL, 32);  

    tx_buf[0] = SI5347_SET_ADDRESS_CMD;
    tx_buf[1] = reg;
    tx_buf[2] = SI5347_WRITE_DATA_CMD;
    tx_buf[3] = val;

    spi_send_receive(SI5347_BUS, SI5347_CS, SI5347_MODE, tx_buf, NULL, 32);  

}


int si5347_configure(int samples_clk)
{
    si5347ab_revb_register_t* registers = &si5347ab_revb_registers_160[0];
    
    printf("si5347 id: %02x %02x\n", si5347_read_reg8(0x0003), si5347_read_reg8(0x0002));

    if (samples_clk == 100)
    {
        registers = &si5347ab_revb_registers_100[0];
    }
    else if (samples_clk == 125)
    {
        registers = &si5347ab_revb_registers_125[0];
    }
     

    int i = 0;
    for (i = 0; i < SI5347AB_REVB_REG_CONFIG_NUM_REGS; i++)
    {
        u8 reg;
        u16 addr = registers[i].address;

        si5347_write_reg8(addr, registers[i].value);

        reg = si5347_read_reg8(registers[i].address);
        
        if ((addr != 0x0414) && (addr != 0x0514) && (addr != 0x0614) && (addr != 0x0715) && (addr != 0x001c)) 
        {
            if (reg != registers[i].value)
                printf("%04x -> %02x wrong %02x\n", addr, registers[i].value, reg);
        }
    }
    printf("si5347 configured\n");
    return 0;
}

int ad9643_configure()
{
    // setup "offset binary" output format
    ad9643_write_reg8(0x14, 0x04);

    return 0;
}


