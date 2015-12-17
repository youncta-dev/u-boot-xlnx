/*
 * (C) Copyright 2012 Xilinx
 * (C) Copyright 2014 Digilent Inc.
 *
 * Configuration for Zynq Development Board - YPACKET2
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_YPACKET2_H
#define __CONFIG_ZYNQ_YPACKET2_H

#define CONFIG_SYS_SDRAM_SIZE (512 * 1024 * 1024)
#define CONFIG_SYS_DCACHE_OFF
#define CONFIG_ZYNQ_SERIAL_UART0
#define CONFIG_SYS_NO_FLASH
#define CONFIG_SPI_FLASH_STMICRO

#define CONFIG_ZYNQ_QSPI
#define CONFIG_ZYNQ_SPI
#define CONFIG_ZYNQ_I2C1
#define CONFIG_ZYNQ_EEPROM
#define CONFIG_ZYNQ_BOOT_FREEBSD

#define CONFIG_CMD_NET          1
#define CONFIG_ZYNQ_GEM_EMIO1   1
#define CONFIG_ZYNQ_GEM1    
#define CONFIG_ZYNQ_GEM_PHY_ADDR1	16

#define CONFIG_CMD_SETUP

#define CONFIG_CMD_APS
#define CONFIG_SYS_ALT_MEMTEST

/* Define YPACKET2 PS Clock Frequency to 50MHz */
#define CONFIG_ZYNQ_PS_CLK_FREQ	50000000UL



#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_YPACKET2_H */
