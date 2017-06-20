
#ifndef SI5347_CONFIG_H
#define SI5347_CONFIG_H

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5347ab_register_t;


#include "./si5347/Si5347_revD_samples100_serdes125_run3-Registers.h"
#include "./si5347/Si5347_revB_samples100_serdes125_run3-Registers.h"


#endif

