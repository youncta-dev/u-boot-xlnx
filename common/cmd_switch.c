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
void set_phy_reg(int port, int page, int reg, uint16_t val);


static int do_switch_read(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

	int rc = 0;

	if (argc < 4)
		return CMD_RET_USAGE;

    if (strcmp(argv[1], "counter") == 0) 
    {
	    int	port, counter;
	    port = simple_strtoul(argv[2], NULL, 16);
	    counter = simple_strtoul(argv[3], NULL, 16);
	    printf("%d\n", get_counter(port, counter));

    }

    
    if (strcmp(argv[1], "phy") == 0) 
    {
	    int	port, page, reg;


	    if (argc < 5)
		    return CMD_RET_USAGE;

	    port = simple_strtoul(argv[2], NULL, 16);
	    page = simple_strtoul(argv[3], NULL, 16);
	    reg = simple_strtoul(argv[4], NULL, 16);

	    printf("%04x\n", get_phy_reg(port, page, reg));
            
    }

	return (rc);
}

static int do_switch_write(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

    int rc = 0;

    if (strcmp(argv[1], "phy") == 0) 
    {
	    int	port, page, reg;
        uint16_t val;


	    if (argc < 6)
		    return CMD_RET_USAGE;

	    port = simple_strtoul(argv[2], NULL, 16);
	    page = simple_strtoul(argv[3], NULL, 16);
	    reg = simple_strtoul(argv[4], NULL, 16);
        val = simple_strtoul(argv[5], NULL, 16);

	    set_phy_reg(port, page, reg, val);
            
    }

	return (rc);
}


/**************************************************/
U_BOOT_CMD(
	switch_read,	5,	1,	do_switch_read,
	"switch_read counter <port> <counter>",
	"switch_read phy <port> <page> <reg>"
);

U_BOOT_CMD(
	switch_write,	6,	1,	do_switch_write,
	"write phy registers",
	"switch_write phy <port> <page> <reg> <val>"
);


