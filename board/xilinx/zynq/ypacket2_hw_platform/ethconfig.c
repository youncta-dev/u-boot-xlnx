#include <common.h>
#include <errno.h>

#include "ethconfig.h"

const char *miiphy_get_current_dev(void);

void toggle_bit(volatile uint32_t* reg, uint32_t mask) 
{
    *reg = *reg | mask;
    mdelay(100);
    *reg = *reg & ~mask;
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


    volatile uint32_t* fpga_reg_1 = (uint32_t*) 0x43c10004;
    volatile uint32_t* fpga_reg_2 = (uint32_t*) 0x43c10008;
    volatile uint32_t* fpga_reg_3 = (uint32_t*) 0x43c1000c;

	net_loop(NONE);

    devname = miiphy_get_current_dev();

    *(fpga_reg_1) = 0x00000020;
    mdelay(500);
    *(fpga_reg_1) = 0x00000001;
    mdelay(500);

    miiphy_read(devname, 0x1b, 0x00, &data);
    printf("Global 1 reg 0 %04x\n", data);

    // 1000 BASE-X 
    miiphy_write(devname, 0x0a, 0x00, 0x0009);
    mdelay(200);
    miiphy_read(devname, 0x0a, 0x00, &data);

    // leds
    miiphy_write(devname, 0x00, 0x10, 0x8010);
    miiphy_write(devname, 0x08, 0x10, 0x80e0);
    printf("HW switch, port 0x0a reg 0 %04x link %d, \n", data, (data & 0x0800) == 0x0800);


    // autoneg enable
    *fpga_reg_3 = 0x00a01000;    

    toggle_bit(fpga_reg_3, GIGE_RESET);
    toggle_bit(fpga_reg_3, CONF_VALID);
    toggle_bit(fpga_reg_3, AN_CONF_VALID);
    toggle_bit(fpga_reg_3, AN_RESTART);

    mdelay(500);
    uint16_t pcs_status = *fpga_reg_2;
    printf("Status PCS %04x, link %d sync %d\n", pcs_status, pcs_status & 0x0001, (pcs_status & 0x0002) == 0x0002 );

    

    return 0;
}


