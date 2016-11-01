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

unsigned int get_counter(int port, int counter);
unsigned short get_phy_reg(int port, int page, int reg);

static int do_read_phy_reg(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	int	port, page, reg;

	int rc = 0;


	if (argc < 4)
		return CMD_RET_USAGE;

	port = simple_strtoul(argv[1], NULL, 10);
	page = simple_strtoul(argv[2], NULL, 10);
	reg = simple_strtoul(argv[3], NULL, 10);

	printf("%04x\n", get_phy_reg(port, page, reg));


	return (rc);
}

static int do_read_counter(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	int	port, counter;

	int rc = 0;


	if (argc < 3)
		return CMD_RET_USAGE;

	port = simple_strtoul(argv[1], NULL, 10);
	counter = simple_strtoul(argv[2], NULL, 10);

	printf("%d\n", get_counter(port, counter));


	return (rc);
}



/**************************************************/
U_BOOT_CMD(
	switch_read_counter,	3,	1,	do_read_counter,
	"read counter",
	"<port> <counter>"
);

U_BOOT_CMD(
	switch_read_phy,	4,	1,	do_read_phy_reg,
	"read phy reg",
	"<port> <page> <reg>"
);

