#include <common.h>
#include <errno.h>

#include "ethconfig.h"




int eth_configure(void)
{
	unsigned short	data;
	const char *devname;

    volatile uint32_t* axi_gpio_0 = (uint32_t*) 0x41200000;
    

	net_loop(NONE);

    devname = miiphy_get_current_dev();


    *(axi_gpio_0) = 0x00000001;
    mdelay(100);

    // 1000 BASE-X 
    miiphy_write(devname, 0x0a, 0x00, 0x0049);
    mdelay(100);
    miiphy_read(devname, 0x0a, 0x00, &data);

    miiphy_write(devname, 0x00, 0x10, 0x8010);
    miiphy_write(devname, 0x08, 0x10, 0x80e0);


    printf("Marvell switch active, port 0x0a reg 0 %04x\n", data);
    return 0;
}


