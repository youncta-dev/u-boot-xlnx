/*
 * (C) Copyright 2002
 * Gerald Van Baren, Custom IDEAS, vanbaren@cideas.com
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * SPI Read/Write Utilities
 */

#include <common.h>
#include <command.h>
#include <errno.h>
#include <spi.h>



int modem_configure(void);


/*-----------------------------------------------------------------------
 * Definitions
 */



static int do_setup(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

#ifdef CONFIG_TARGET_ZYNQ_YPACKET2
    modem_configure();
#endif

	return 0;
}

U_BOOT_CMD(
	setup ,    2,    1,     do_setup,
	"setup component specified as argument",
	"N\n"
	"  "
);



