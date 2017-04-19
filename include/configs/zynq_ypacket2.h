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
#define CONFIG_ENV_SPI_BUS	5
#define CONFIG_ENV_OFFSET           0xf00000
#define CONFIG_SYS_REDUNDAND_ENVIRONMENT    1
#define CONFIG_ENV_OFFSET_REDUND    0xf40000
#define CONFIG_ZYNQ_I2C1
#define CONFIG_ZYNQ_EEPROM
#define CONFIG_ZYNQ_BOOT_FREEBSD

#define CONFIG_CMD_NET          1
#define CONFIG_ZYNQ_GEM_EMIO1   1
#define CONFIG_ZYNQ_GEM1        1


#define CONFIG_ZYNQ_GEM_PHY_ADDR1	17
#define CONFIG_ZYNQ_GEM1_PHY_LESS	 1

#define CONFIG_CMD_SETUP
#define CONFIG_LAST_STAGE_INIT
#define CONFIG_CMD_APS
#define CONFIG_CMD_SWITCH
#define CONFIG_SYS_ALT_MEMTEST

/* Define YPACKET2 PS Clock Frequency to 50MHz */
#define CONFIG_ZYNQ_PS_CLK_FREQ	50000000UL

#define CONFIG_ENV_OFFSET		0xf00000


#include <configs/zynq-common.h>

#undef CONFIG_IPADDR	
#undef CONFIG_SERVERIP	

#define CONFIG_IPADDR       172.30.0.252	
#define CONFIG_SERVERIP	    172.30.0.250

#undef CONFIG_BOOTDELAY
#define CONFIG_BOOTDELAY    5

#undef  CONFIG_EXTRA_ENV_SETTINGS

#define CONFIG_EXTRA_ENV_SETTINGS	\
	"ethaddr=00:0a:35:00:01:22\0"	\
	"kernel_image=uImage\0"	\
	"kernel_load_address=0x2080000\0" \
	"ramdisk_image=uramdisk.image.gz\0"	\
	"ramdisk_load_address=0x4000000\0"	\
	"devicetree_image=devicetree.dtb\0"	\
	"devicetree_load_address=0x2000000\0"	\
	"loadbit_addr=0x100000\0"	\
	"loadbootenv_addr=0x2000000\0" \
	"kernel_size=0x500000\0"	\
	"devicetree_size=0x20000\0"	\
	"ramdisk_size=0x5E0000\0"	\
	"boot_size=0xF00000\0"	\
	"fdt_high=0x20000000\0"	\
	"initrd_high=0x20000000\0"	\
	"bootenv=uEnv.txt\0" \
	"loadbootenv=load mmc 0 ${loadbootenv_addr} ${bootenv}\0" \
	"importbootenv=echo Importing environment from SD ...; " \
		"env import -t ${loadbootenv_addr} $filesize\0" \
	"preboot=if test $modeboot = sdboot && env run sd_uEnvtxt_existence_test; " \
			"then if env run loadbootenv; " \
				"then env run importbootenv; " \
			"fi; " \
		"fi; \0" \
	"qspiboot=echo Copying Linux from QSPI flash to RAM... && " \
		"sf probe 0 0 0 && " \
		"sf read ${kernel_load_address} 0x100000 ${kernel_size} && " \
		"sf read ${devicetree_load_address} 0x600000 ${devicetree_size} && " \
		"echo Copying ramdisk... && " \
		"sf read ${ramdisk_load_address} 0x620000 ${ramdisk_size} && " \
		"bootm ${kernel_load_address} ${ramdisk_load_address} ${devicetree_load_address}\0" \
    "bank=0\0" \
    "aps_ram_load_address=0x2000000\0" \
    "aps_size=0x6000000\0" \
    "kernel_dtb_size=0x600000\0" \
    "aps0_qspi_address=0x1000000\0" \
    "kernel0_qspi_address=0x1010000\0" \
    "aps1_qspi_address=0x7000000\0" \
	"bank0args=setenv bootargs ${bootargs} ${debugflags} rootfstype=squashfs root=/dev/mtdblock4 ro\0" \
	"bank1args=setenv bootargs ${bootargs} ${debugflags} rootfstype=squashfs root=/dev/mtdblock6 ro\0" \
	"bootargs=console=ttyPS0,115200 earlyprintk \0" \
	"debugflags=nojffs2=1\0" \
	"qspibootbank0=echo Copying APS0 from QSPI flash to RAM... && " \
		"sf probe 5:0 && " \
		"sf read ${aps_ram_load_address} ${aps0_qspi_address} ${kernel_dtb_size} && aps ${aps_ram_load_address} && " \
		"run bank0args && " \
        "bootm ${aps_kernel_load_addr} - ${aps_dtb_load_addr}\0" \
	"qspibootbank1=echo Copying APS1 from QSPI flash to RAM... && " \
		"sf probe 5:0 && " \
		"sf read ${aps_ram_load_address} ${aps1_qspi_address} ${kernel_dtb_size} && aps ${aps_ram_load_address} && " \
		"run bank1args && " \
        "bootm ${aps_kernel_load_addr} - ${aps_dtb_load_addr}\0" \
	"updateboot=echo Downloading new boot ... && " \
		"sf probe 5:0 && " \
		"tftpboot 0x100000 boot.bin && " \
		"sf erase 0x0 +${filesize} && " \
        "sf write ${fileaddr} 0x0 ${filesize}\0" \
	"updateaps0=echo Downloading new aps ... && " \
		"sf probe 5:0 && " \
		"tftpboot 0x100000 aps.bin && " \
		"sf erase ${aps0_qspi_address} +${filesize} && " \
        "sf write ${fileaddr} ${aps0_qspi_address} ${filesize}\0" \
	"updatekernel0=echo Downloading new kernel ... && " \
		"sf probe 5:0 && " \
		"tftpboot 0x100000 uImage && " \
		"sf erase ${kernel0_qspi_address} +${filesize} && " \
        "sf write ${fileaddr} ${kernel0_qspi_address} ${filesize}\0" \
	"updateaps1=echo Downloading new aps ... && " \
		"sf probe 5:0 && " \
		"tftpboot 0x100000 aps.bin && " \
		"sf erase ${aps1_qspi_address} +${filesize} && " \
        "sf write ${fileaddr} ${aps1_qspi_address} ${filesize}\0" \
	"uenvboot=" \
		"if run loadbootenv; then " \
			"echo Loaded environment from ${bootenv}; " \
			"run importbootenv; " \
		"fi; " \
		"if test -n $uenvcmd; then " \
			"echo Running uenvcmd ...; " \
			"run uenvcmd; " \
		"fi\0"


#endif /* __CONFIG_ZYNQ_YPACKET2_H */
