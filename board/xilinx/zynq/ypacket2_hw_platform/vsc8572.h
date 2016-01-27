#ifndef _VSC8572_H_
#define _VSC8572_H_

#include <miiphy.h>

/* Ports */
#define PORT_0_ADD  0x10
#define PORT_1_ADD  0x11

/* Registers */
#define PAGE_SEL_REG        0x1f

#define PAGE_G              0x0010
#define PAGE_M              0x0000
#define PAGE_1              0x0001
#define PAGE_2              0x0002
#define PAGE_3              0x0003

int vcs8572_configure(void);


#endif

