#include <common.h>
#include <errno.h>

#include "ethconfig.h"

#define FPGA_PROGRAMMED 0x00000004

const char *miiphy_get_current_dev(void);

void _toggle_bit(volatile uint32_t* reg, uint32_t mask, int delay_ms) 
{
    *reg = *reg | mask;
    mdelay(delay_ms);
    *reg = *reg & ~mask;
    mdelay(delay_ms);
}

void _set_bit(volatile uint32_t* reg, int bit) 
{
    *reg = *reg | (1 << bit);
    mdelay(100);
}

void _clear_bit(volatile uint32_t* reg, int bit) 
{
    *reg = *reg & ~(1 << bit);
    mdelay(100);
}

unsigned short get_switch_reg(int port, int reg)
{
    unsigned short data;
    const char *devname = miiphy_get_current_dev();

    miiphy_read(devname, port, reg, &data);

    return data;

}

void set_switch_reg(int port, int reg, uint16_t val)
{
    const char *devname = miiphy_get_current_dev();

    miiphy_write(devname, port, reg, val);

}


unsigned int get_counter(int port, int counter)
{
    unsigned short low, high;
    unsigned int res = 0;
    const char *devname = miiphy_get_current_dev();

    miiphy_write(devname, 0x1b, 0x1d, 0xC000 | ((port+1) << 5) | counter);
    mdelay(50);

    miiphy_read(devname, 0x1b, 0x1f, &low);
    miiphy_read(devname, 0x1b, 0x1e, &high); 
    
    res = (high << 16) | low;

    return res;
}

unsigned short get_phy_reg(int port, int page, int reg)
{
    const char *devname = miiphy_get_current_dev();
    unsigned short data;

    // write page in reg 0x16
    miiphy_write(devname, 0x1c, 0x19, page);
    miiphy_write(devname, 0x1c, 0x18, 0x9400 | (port << 5) | 0x16);
    mdelay(50);

    miiphy_write(devname, 0x1c, 0x18, 0x9800 | (port << 5) | reg);
    mdelay(50);

    miiphy_read(devname, 0x1c, 0x19, &data);
    return data;
}

void set_phy_reg(int port, int page, int reg, uint16_t val)
{
    const char *devname = miiphy_get_current_dev();

    // write page in reg 0x16
    miiphy_write(devname, 0x1c, 0x19, page);
    miiphy_write(devname, 0x1c, 0x18, 0x9400 | (port << 5) | 0x16);
    mdelay(50);


    miiphy_write(devname, 0x1c, 0x19, val);
    miiphy_write(devname, 0x1c, 0x18, 0x9400 | (port << 5) | reg);
    mdelay(50);

}


int eth_configure(void)
{
	unsigned short	data; 
    int i = 0;
	const char *devname;

    volatile uint32_t* fpga_reg_1 = (uint32_t*) FPGA_CTRL_REG1; 
    volatile uint32_t* fpga_reg_2 = (uint32_t*) FPGA_CTRL_REG2;

    uint32_t devcfg_int_sts =  *((uint32_t*) 0xf800700c);
 

    if ((devcfg_int_sts & FPGA_PROGRAMMED) == 0)
        return -1;

    printf("FPGA is programmed %08x\n", *fpga_reg_1);

    if ((*fpga_reg_1 & (1 << FPGA_CTRL_REG1_LINUX_SCRATCH_BIT)) == 0x00000000) 
    {
	    net_loop(NONE);

        devname = miiphy_get_current_dev();

	    _set_bit(fpga_reg_1, FPGA_CTRL_REG1_ULPI_RESET_BIT);
        mdelay(500);
	    _clear_bit(fpga_reg_1, FPGA_CTRL_REG1_ULPI_RESET_BIT);
        mdelay(50);


	    _set_bit(fpga_reg_1, FPGA_CTRL_REG1_RGMII_RESET_BIT);
        mdelay(50);
	    _set_bit(fpga_reg_1, FPGA_CTRL_REG1_MARVELL_RST_BIT);
        mdelay(500);
        _clear_bit(fpga_reg_1, FPGA_CTRL_REG1_MARVELL_RST_BIT);
        mdelay(500);
	    _clear_bit(fpga_reg_1, FPGA_CTRL_REG1_RGMII_RESET_BIT);

        miiphy_read(devname, 0x1b, 0x00, &data);
        printf("Global 1 reg 0 %04x\n", data);


	    _set_bit(fpga_reg_1, FPGA_CTRL_REG1_SMI_SWITCH_BIT);
        miiphy_write(devname, 0x12, 0x10, 0x0040);
        mdelay(50);

        // Select external switch mdio bus
	    _clear_bit(fpga_reg_1, FPGA_CTRL_REG1_SMI_SWITCH_BIT);


    #define RGMII_PORT  0
        // Setup RGMII port
        miiphy_write(devname, RGMII_PORT, 0x01, 0xc003);
        miiphy_write(devname, RGMII_PORT, 0x00, 0xce07);    
        miiphy_write(devname, RGMII_PORT, 0x04, 0x0073);
        uint16_t val = 0;
        miiphy_read(devname, RGMII_PORT, 0x00, &val);
        printf("RGMII Reg 0 %04x \n", val);

        // leds
        //miiphy_write(devname, 0x00, 0x10, 0x8010);
        //miiphy_write(devname, 0x08, 0x10, 0x80e0);

	    _set_bit(fpga_reg_1, FPGA_CTRL_REG1_UBOOT_SCRATCH_BIT);

        printf("FPGA CTRL REG 1 %08x \n", *fpga_reg_1);
        printf("FPGA CTRL REG 2 %08x \n", *fpga_reg_2);
        
        if ((*fpga_reg_2 & 0xff000000) == 0x03000000)
            setenv("boardrun", "3");
        else if ((*fpga_reg_2 & 0xff000000) == 0x04000000)
            setenv("boardrun", "4");

        if (getenv("bootdelay") == NULL) {
            setenv("bootdelay", "4");
        }

        if (getenv("ysplit") == NULL) {
            setenv("ysplit", "0");
            saveenv();
        }
        
    }
    else 
    {
        printf("FPGA is already configured\n");
        //_set_bit(fpga_reg_1, FPGA_CTRL_REG1_RGMII_RESET_BIT);
    }
    
    return 0;
}


