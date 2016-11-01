#ifndef _ETHCONFIG_H_
#define _ETHCONFIG_H_

#include <miiphy.h>

#define GIGE_RESET      0x00000010
#define CONF_VALID      0x00000020
#define AN_CONF_VALID   0x00000040
#define AN_RESTART      0x00000080

int eth_configure(void);

unsigned int get_counter(int port, int counter);
unsigned short get_phy_reg(int port, int page, int reg);
void toggle_bit();

#endif

