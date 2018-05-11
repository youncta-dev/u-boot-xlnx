#ifndef _ETHCONFIG_H_
#define _ETHCONFIG_H_

#include <miiphy.h>

#define FPGA_BASE       			0x43c10000

#define FPGA_CTRL_REG1							(FPGA_BASE + 0x0004)
#define FPGA_CTRL_REG1_MARVELL_RST_BIT			0
#define FPGA_CTRL_REG1_PS7_RSTN_BIT				1
#define FPGA_CTRL_REG1_SMI_SWITCH_BIT			2
#define FPGA_CTRL_REG1_BOOT0_STM32_BIT			3
#define FPGA_CTRL_REG1_QSPI_RESET_BIT			4
#define FPGA_CTRL_REG1_ULPI_RESET_BIT			5
#define FPGA_CTRL_REG1_RGMII_RESET_BIT			6
#define FPGA_CTRL_REG1_LINUX_SCRATCH_BIT			    31
#define FPGA_CTRL_REG1_UBOOT_SCRATCH_BIT			    30
#define FPGA_CTRL_REG1_FSBL_SCRATCH_BIT			        29

#define FPGA_CTRL_REG2							(FPGA_BASE + 0x0008)
#define FPGA_CTRL_REG2_RGMII_CLOCK_STATUS_BIT	6
#define FPGA_CTRL_REG2_BOARD_VERSION            0xff000000

int eth_configure(void);

unsigned int get_counter(int port, int counter);
unsigned short get_phy_reg(int port, int page, int reg);
void set_phy_reg(int port, int page, int reg, uint16_t val);
unsigned short get_switch_reg(int port, int reg);
void set_switch_reg(int port, int reg, uint16_t val);


#endif

