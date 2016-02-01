#include <common.h>
#include <errno.h>

#include "vsc8572.h"




int vsc8572_configure(void)
{
	unsigned char	addr, reg;
	unsigned short	data;
	const char *devname;
    volatile unsigned int* p_int_sts;

	net_loop(NONE);

    devname = miiphy_get_current_dev();

    miiphy_write(devname, PORT_0_ADD, PAGE_SEL_REG, PAGE_G);
    miiphy_read (devname, PORT_0_ADD, 0x13, &data);
    miiphy_write(devname, PORT_0_ADD, 0x13, data & 0x3fff);

    miiphy_write(devname, PORT_0_ADD, PAGE_SEL_REG, PAGE_M);
    miiphy_read (devname, PORT_0_ADD, 0x17, &data);
    miiphy_write(devname, PORT_0_ADD, 0x17, (data & 0xefff));

    miiphy_write(devname, PORT_0_ADD, PAGE_SEL_REG, PAGE_G);
    miiphy_write(devname, PORT_0_ADD, 0x12, 0x80f0);

    miiphy_write(devname, PORT_0_ADD, PAGE_SEL_REG, PAGE_M);
    miiphy_read (devname, PORT_0_ADD, 0x17, &data);
    miiphy_write(devname, PORT_0_ADD, 0x17, (data & 0xf8ff) | 0x0000);

    miiphy_read (devname, PORT_0_ADD, 0x00, &data);
    miiphy_write(devname, PORT_0_ADD, 0x00, data | 0x8000);


    // Enable autoneg on MAC SGMII 
    miiphy_write(devname, PORT_0_ADD, PAGE_SEL_REG, PAGE_3);
    miiphy_read (devname, PORT_0_ADD, 0x10, &data);
    miiphy_write(devname, PORT_0_ADD, 0x10, data | 0x0080);


    miiphy_read (devname, PORT_0_ADD, 0x11, &data);


    udelay(1000000);

    /* nail down the isolate bit */
    miiphy_write(devname, 0x07, 0x00, 0x1140);

    printf("vsc8572 configured\n");
    return 0;
}


