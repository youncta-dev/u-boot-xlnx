#include <common.h>
#include <errno.h>

#include "modem.h"


void modem_configure()
{
    volatile u8* base = (u8*) PWM_BASE_ADDRESS;

    // AGC configuration
    // TCSR0 config: 
    *((u32*)(base + PWM_TCSR0)) = 0x00000616;
    *((u32*)(base + PWM_TCSR1)) = 0x00000616;
    *((u32*)(base + PWM_TLR0))  = 0x0000009e;
    *((u32*)(base + PWM_TLR1))  = 0x0000004e;

}


