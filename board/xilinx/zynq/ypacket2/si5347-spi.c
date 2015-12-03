#include <common.h>
#include <errno.h>
#include <spi.h>

#include "si5347-spi.h"
#include "si5347_config.h"


static unsigned int	bus = 1;
static unsigned int	cs = 0;
static unsigned int	mode = 0;


static int si5347_send_receive(uchar* dout, uchar* din, int bitlen)
{
	struct spi_slave *slave;
	int ret = 0;

	slave = spi_setup_slave(bus, cs, 1000000, mode);
	if (!slave) {
		printf("Invalid device %d:%d\n", bus, cs);
		return -EINVAL;
	}

	ret = spi_claim_bus(slave);
	if (ret)
		goto done;
	ret = spi_xfer(slave, bitlen, dout, din, SPI_XFER_BEGIN | SPI_XFER_END);

	if (ret) {
		printf("Error %d during SPI transaction\n", ret);
	} 
done:
	spi_release_bus(slave);


	return ret;
}


static u8 read_reg8(u16 addr)
{
    u8 tx_buf[4];
    u8 rx_buf[4];


    u8 page = (addr >> 8) & 0xff;
    u8 reg = addr & 0xff;



    // First write page
    tx_buf[0] = SET_ADDRESS_CMD;
    tx_buf[1] = PAGE_SET_REG;
    tx_buf[2] = WRITE_DATA_CMD;
    tx_buf[3] = page;

    si5347_send_receive(tx_buf, NULL, 32);  

    tx_buf[0] = SET_ADDRESS_CMD;
    tx_buf[1] = reg;
    tx_buf[2] = READ_DATA_CMD;

    si5347_send_receive(tx_buf, rx_buf, 32);  

    return rx_buf[3];


}

static void write_reg8(u16 addr, u8 val)
{
    u8 tx_buf[4];
    u8 rx_buf[4];


    u8 page = (addr >> 8) & 0xff;
    u8 reg = addr & 0xff;


    // First write page
    tx_buf[0] = SET_ADDRESS_CMD;
    tx_buf[1] = PAGE_SET_REG;
    tx_buf[2] = WRITE_DATA_CMD;
    tx_buf[3] = page;

    si5347_send_receive(tx_buf, NULL, 32);  

    tx_buf[0] = SET_ADDRESS_CMD;
    tx_buf[1] = reg;
    tx_buf[2] = WRITE_DATA_CMD;
    tx_buf[3] = val;

    si5347_send_receive(tx_buf, NULL, 32);  

}


int si5347_configure()
{
    printf("si5347 id: %02x %02x\n", read_reg8(0x0003), read_reg8(0x0002));


    int i = 0;
    for (i = 0; i < SI5347AB_REVB_REG_CONFIG_NUM_REGS; i++)
    {
        u8 reg;
        write_reg8(si5347ab_revb_registers[i].address, si5347ab_revb_registers[i].value);

        reg = read_reg8(si5347ab_revb_registers[i].address);
        if (reg != si5347ab_revb_registers[i].value)
            printf("%04x -> %02x wrong %02x\n", si5347ab_revb_registers[i].address, si5347ab_revb_registers[i].value, reg);
    }
}



