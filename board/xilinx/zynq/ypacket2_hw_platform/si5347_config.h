
#ifndef SI5347_CONFIG_H
#define SI5347_CONFIG_H

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5347ab_register_t;

#define SAMPLES_CLK_125

#ifdef SAMPLES_CLK_100
#include "./si5347/Si5347_revD_adc100_dac100_serdes125_run3-Registers.h"
#include "./si5347/Si5347_revB_adc100_dac100_serdes125_run3-Registers.h"
#endif

#ifdef SAMPLES_CLK_125
#include "./si5347/Si5347_revD_adc125_dac250_serdes125_run3-Registers.h"
#include "./si5347/Si5347_revB_adc125_dac250_serdes125_run3-Registers.h"
#endif

#endif

