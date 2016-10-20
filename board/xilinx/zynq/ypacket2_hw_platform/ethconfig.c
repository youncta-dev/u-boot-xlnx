#include <common.h>
#include <errno.h>

#include "ethconfig.h"




int eth_configure(void)
{
	unsigned char	addr, reg;
	unsigned short	data;
	const char *devname;
    volatile unsigned int* p_int_sts;

	net_loop(NONE);

    devname = miiphy_get_current_dev();

    udelay(1000000);

    /* nail down the isolate bit */
    miiphy_write(devname, 0x10, 0x00, 0x1140);


    printf("eth chip configured\n");
    return 0;
}


