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



int si5347_configure();


/*-----------------------------------------------------------------------
 * Definitions
 */



static int do_si5347(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

    #ifdef CONFIG_TARGET_ZYNQ_YPACKET2
    si5347_configure();
    #endif

	return 0;
}

U_BOOT_CMD(
	si5347,	1,		1,	do_si5347,
	"config si5347",
	""
);

