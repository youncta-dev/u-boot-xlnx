/*
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * Memory Functions
 *
 * Copied from FADS ROM, Dan Malek (dmalek@jlc.net)
 */

#include <common.h>
#include <bootretry.h>
#include <cli.h>
#include <command.h>

#include <hash.h>
#include <inttypes.h>
#include <watchdog.h>
#include <asm/io.h>
#include <linux/compiler.h>
#include <mapmem.h>

DECLARE_GLOBAL_DATA_PTR;



static int do_aps(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	ulong	addr;

	int rc = 0;


	if (argc < 2)
		return CMD_RET_USAGE;

	/* Address is specified since argc > 1
	 */
	addr = simple_strtoul(argv[1], NULL, 16);

	{

	    uint32_t x;

        char out[16] = { 0 };

		volatile uint32_t *data = map_sysmem(addr, 128);

		x = *(data + 4);
		sprintf(out, "%0*x", 8, x + addr);
        setenv("aps_kernel_load_addr", out);

		x = *(data + 6);
		sprintf(out, "%0*x", 8, x + addr);
        setenv("aps_dtb_load_addr", out);

		x = *(data + 8);
		sprintf(out, "%0*x", 8, x + addr);
        setenv("aps_ramdisk_load_addr", out);

		unmap_sysmem((const void*) data);
	}


	return (rc);
}



/**************************************************/
U_BOOT_CMD(
	aps,	2,	1,	do_aps,
	"parse aps header",
	"address of the aps in memory"
);

