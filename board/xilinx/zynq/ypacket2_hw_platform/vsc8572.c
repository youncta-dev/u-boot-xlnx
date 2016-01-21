#include <common.h>
#include <errno.h>
#include <spi.h>
#include <miiphy.h>

#include "vsc8572.h"




int vsc8572_configure(void)
{
	unsigned char	addr, reg;
	unsigned short	data;
	const char *devname;

	net_init();

    devname = miiphy_get_current_dev();

    printf("devname %s\n", devname);

    
    /* select register page G */
    miiphy_write(devname, 0x10, 0x31, 0x0010);

    /* write register 19G */
    miiphy_read (devname, 0x10, 0x13, &data);
    miiphy_write(devname, 0x10, 0x13, data & 0x3fff);

    /* select register page M */

    printf("data %04x\n", data);

    printf("vcs8572 configured\n");
    return 0;
}


