
typedef u_char u8;
typedef u_short u16;


#define SI5347_BUS      1
#define SI5347_CS       0
#define SI5347_MODE     0

#define AD9746_BUS      1
#define AD9746_CS       1
#define AD9746_MODE     0

#define AD9643_BUS      0
#define AD9643_CS       0
#define AD9643_MODE     0


#define AD9643_WRITE_DATA_CMD      0x00
#define AD9643_READ_DATA_CMD       0x80

#define SI5347_SET_ADDRESS_CMD     0x00
#define SI5347_WRITE_DATA_CMD      0x40
#define SI5347_READ_DATA_CMD       0x80
#define SI5347_PAGE_SET_REG        0x01 

int si5347_configure(int);



