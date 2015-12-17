/*
 * Si5347AB Rev B Configuration Register Export Header File
 *
 * This file represents a series of Silicon Labs Si5347AB Rev B 
 * register writes that can be performed to load a single configuration 
 * on a device. It was created by a Silicon Labs ClockBuilder Pro
 * export tool.
 *
 * Part:		                                       Si5347AB Rev B
 * Design ID:                                          5347EVB1
 * Includes Pre/Post Download Control Register Writes: Yes
 * Created By:                                         ClockBuilder Pro v2.3 [2015-10-26]
 * Timestamp:                                          2015-11-09 16:54:43 GMT+01:00
 *
 * A complete design report corresponding to this export is included at the end 
 * of this header file.
 *
 */

#ifndef SI5347AB_REVB_REG_CONFIG_HEADER
#define SI5347AB_REVB_REG_CONFIG_HEADER

#define SI5347AB_REVB_REG_CONFIG_NUM_REGS				523

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5347ab_revb_register_t;


extern si5347ab_revb_register_t const si5347ab_revb_registers[SI5347AB_REVB_REG_CONFIG_NUM_REGS];

/*
 * Design Report
 *
 * Overview
 * ========
 * Part:         Si5347 Rev B
 * Project File: C:\Users\adibacco\Documents\Si5347-5347EVB1.slabtimeproj
 * Design ID:    5347EVB1
 * Created By:   ClockBuilder Pro v2.3 [2015-10-26]
 * Timestamp:    2015-11-09 16:54:42 GMT+01:00
 * 
 * Design Rule Check
 * =================
 * Errors:
 * - No errors
 * 
 * Warnings:
 * - No warnings
 * 
 * Device Grade
 * ============
 * Maximum output frequency: 200 MHz
 * Frequency synthesis mode: Fractional
 * Frequency plan grade:     B
 * Minimum Base OPN:         Si5347B*
 * 
 * Device      Output Clock
 * Grade       Frequency Range       Typical Jitter
 * ---------   -------------------   --------------
 * Si5347A     100 Hz to 710.4 MHz   < 150 fs
 * Si5347B*    100 Hz to 350 MHz     "
 * 
 * * Based on your calculated frequency plan, a Si5347B grade device is
 * sufficient for your design. For more in-system configuration flexibility
 * (higher frequencies), consider selecting device grade Si5347A when
 * specifying an ordering part number (OPN) for your application. See the
 * datasheet Ordering Guide for more information.
 * 
 * Design
 * ======
 * Host Interface:
 *    I/O Power Supply: VDDA (3.3V)
 *    SPI Mode: 4-Wire
 *    I2C Address Range: 108d to 111d / 0x6C to 0x6F (selected via A0/A1 pins)
 * 
 * XA/XB:
 *    48 MHz (XTAL - Crystal)
 * 
 * Inputs:
 *     IN0: 160 MHz
 *          Standard
 *          DSPLL A,B,C,D
 *     IN1: 125 MHz
 *          Standard
 *          DSPLL B,D
 *     IN2: 200 MHz
 *          Standard
 *          DSPLL B
 *     IN3: 125 MHz
 *          Standard
 *          DSPLL C
 * 
 * Outputs:
 *    OUT0: 160 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL A
 *    OUT1: 160 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL A
 *    OUT2: 160 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL A
 *    OUT3: 125 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL B
 *    OUT4: 125 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL C
 *    OUT5: 125 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL C
 *    OUT6: 200 MHz
 *          Enabled, LVDS 2,5 V
 *          DSPLL D
 *    OUT7: Unused
 * 
 * Frequency Plan
 * ==============
 * Fvco = 14,208 GHz [ 14 + 26/125 GHz ]
 * MXAXB = 296
 * 
 * DSPLL A:
 *    Fpfd = 1,6666666666666666... MHz [ 1 + 2/3 MHz ]
 *    Fdco = 960 MHz
 *    MA = 576
 *    Nominal Bandwidth:
 *      Desired: 40,000 Hz
 *      Actual:  43,392 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1,000 kHz
 *      Actual:  695,126 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  1
 *         BW5:  63
 * DSPLL B:
 *    Fpfd = 1,6666666666666666... MHz [ 1 + 2/3 MHz ]
 *    Fdco = 750 MHz
 *    MB = 450
 *    Nominal Bandwidth:
 *      Desired: 40,000 Hz
 *      Actual:  39,335 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  14
 *         BW3:  13
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1,000 kHz
 *      Actual:  1,261 kHz
 *      Coefficients:
 *         BW0:  21
 *         BW1:  42
 *         BW2:  9
 *         BW3:  8
 *         BW4:  1
 *         BW5:  63
 * DSPLL C:
 *    Fpfd = 1,6666666666666666... MHz [ 1 + 2/3 MHz ]
 *    Fdco = 750 MHz
 *    MC = 450
 *    Nominal Bandwidth:
 *      Desired: 40,000 Hz
 *      Actual:  39,335 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  14
 *         BW3:  13
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1,000 kHz
 *      Actual:  1,261 kHz
 *      Coefficients:
 *         BW0:  21
 *         BW1:  42
 *         BW2:  9
 *         BW3:  8
 *         BW4:  1
 *         BW5:  63
 * DSPLL D:
 *    Fpfd = 1,6666666666666666... MHz [ 1 + 2/3 MHz ]
 *    Fdco = 800 MHz
 *    MD = 480
 *    Nominal Bandwidth:
 *      Desired: 40,000 Hz
 *      Actual:  34,759 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1,000 kHz
 *      Actual:  1,115 kHz
 *      Coefficients:
 *         BW0:  21
 *         BW1:  42
 *         BW2:  8
 *         BW3:  7
 *         BW4:  1
 *         BW5:  63
 * 
 * P dividers:
 *    P0  = 96
 *    P1  = 75
 *    P2  = 120
 *    P3  = 75
 *    Pxaxb = 1
 * 
 * R dividers:
 *    R0 = 6
 *    R1 = 6
 *    R2 = 6
 *    R3 = 6
 *    R4 = 6
 *    R5 = 6
 *    R6 = 4
 *    R7 = Unused
 * 
 * Dividers listed above show effective values. These values are translated to register settings by ClockBuilder Pro. For the actual register values, see below. Refer to the Family Reference Manual for information on registers related to frequency plan.
 * 
 * Digitally Controlled Oscillator (DCO)
 * =====================================
 * Mode: FINC/FDEC
 * 
 * DSPLL A: DCO Disabled
 * 
 * DSPLL B: DCO Disabled
 * 
 * DSPLL C: DCO Disabled
 * 
 * DSPLL D: DCO Disabled
 * 
 * Revision B Frequency Offset Errata Report
 * =========================================
 * 
 * Output  Frequency  DSPLL  Offset(Max,ppt)
 * ------  ---------  -----  ---------------
 * OUT0    160 MHz    A      0.000000       
 * OUT1    160 MHz    A      0.000000       
 * OUT2    160 MHz    A      0.000000       
 * OUT3    125 MHz    B      0.000000       
 * OUT4    125 MHz    C      0.000000       
 * OUT5    125 MHz    C      0.000000       
 * OUT6    200 MHz    D      0.000000       
 * OUT7    Unused                           
 * 
 * Offset is reported in parts-per-trillion (1e12).
 * 
 * Estimated Power & Junction Temperature
 * ======================================
 * Assumptions:
 * 
 * Revision: B
 * VDD:      1,8 V
 * Ta:       70 \B0C
 * Airflow:  None
 * 
 * Total Power: 1,173 W, On Chip Power: 1,132 W, Tj: 95 \B0C
 * 
 *         Frequency  Format   Voltage   Current     Power
 *         ---------  ------  --------  --------  --------
 * VDD                           1,8 V  284,0 mA    511 mW
 * VDDA                          3,3 V  116,4 mA    384 mW
 * VDDO0     160 MHz  LVDS       2,5 V   16,0 mA     40 mW
 * VDDO1     160 MHz  LVDS       2,5 V   16,0 mA     40 mW
 * VDDO2     160 MHz  LVDS       2,5 V   16,0 mA     40 mW
 * VDDO3     125 MHz  LVDS       2,5 V   15,7 mA     39 mW
 * VDDO4     125 MHz  LVDS       2,5 V   15,7 mA     39 mW
 * VDDO5     125 MHz  LVDS       2,5 V   15,7 mA     39 mW
 * VDDO6     200 MHz  LVDS       2,5 V   16,2 mA     41 mW
 * VDDO7      Unused                                      
 *                                      --------  --------
 *                               Total  511,6 mA   1,173 W
 * 
 * Note:
 * 
 * -Total power includes on- and off-chip power. This is a typical value and estimate only.
 * -Use an EVB for a more exact power measurement
 * -On-chip power excludes power dissipated in external terminations.
 * -Tj is junction temperature. When using a crystal (XTAL) reference, Tj must be less than 125 \B0C (on Si5347 Revision B) for device to comply with datasheet specifications.
 * 
 * Settings
 * ========
 * 
 * Location      Setting Name              Decimal Value  Hex Value       
 * ------------  ------------------------  -------------  ----------------
 * 0x000B[0:6]   I2C_ADDR                  108            0x6C            
 * 0x0016[0]     LOL_ON_HOLD_PLLA          1              0x1             
 * 0x0016[1]     LOL_ON_HOLD_PLLB          1              0x1             
 * 0x0016[2]     LOL_ON_HOLD_PLLC          1              0x1             
 * 0x0016[3]     LOL_ON_HOLD_PLLD          1              0x1             
 * 0x0017[0]     SYSINCAL_INTR_MSK         0              0x0             
 * 0x0017[1]     LOSXAXB_INTR_MSK          0              0x0             
 * 0x0017[2]     LOSREF_INTR_MSK           1              0x1             
 * 0x0017[3]     XAXB_ERR_INTR_MSK         1              0x1             
 * 0x0017[5]     SMB_TMOUT_INTR_MSK        0              0x0             
 * 0x0018[0:3]   LOS_INTR_MSK              0              0x0             
 * 0x0018[4:7]   OOF_INTR_MSK              0              0x0             
 * 0x0019[0]     LOL_INTR_MSK_PLLA         0              0x0             
 * 0x0019[1]     LOL_INTR_MSK_PLLB         0              0x0             
 * 0x0019[2]     LOL_INTR_MSK_PLLC         0              0x0             
 * 0x0019[3]     LOL_INTR_MSK_PLLD         0              0x0             
 * 0x0019[4]     HOLD_INTR_MSK_PLLA        0              0x0             
 * 0x0019[5]     HOLD_INTR_MSK_PLLB        0              0x0             
 * 0x0019[6]     HOLD_INTR_MSK_PLLC        0              0x0             
 * 0x0019[7]     HOLD_INTR_MSK_PLLD        0              0x0             
 * 0x001A[4]     CAL_INTR_MSK_PLLA         0              0x0             
 * 0x001A[5]     CAL_INTR_MSK_PLLB         0              0x0             
 * 0x001A[6]     CAL_INTR_MSK_PLLC         0              0x0             
 * 0x001A[7]     CAL_INTR_MSK_PLLD         0              0x0             
 * 0x0020[0]     FSTEP_PLL_SINGLE          1              0x1             
 * 0x0020[1]     FSTEP_PLL_REGCTRL         0              0x0             
 * 0x0020[2:3]   FSTEP_PLL                 0              0x0             
 * 0x002B[3]     SPI_3WIRE                 0              0x0             
 * 0x002C[0:3]   LOS_EN                    15             0xF             
 * 0x002C[4]     LOSXAXB_DIS               0              0x0             
 * 0x002D[0:1]   LOS0_VAL_TIME             1              0x1             
 * 0x002D[2:3]   LOS1_VAL_TIME             1              0x1             
 * 0x002D[4:5]   LOS2_VAL_TIME             1              0x1             
 * 0x002D[6:7]   LOS3_VAL_TIME             1              0x1             
 * 0x002E[0:15]  LOS0_TRG_THR              69             0x0045          
 * 0x0030[0:15]  LOS1_TRG_THR              69             0x0045          
 * 0x0032[0:15]  LOS2_TRG_THR              69             0x0045          
 * 0x0034[0:15]  LOS3_TRG_THR              69             0x0045          
 * 0x0036[0:15]  LOS0_CLR_THR              69             0x0045          
 * 0x0038[0:15]  LOS1_CLR_THR              69             0x0045          
 * 0x003A[0:15]  LOS2_CLR_THR              69             0x0045          
 * 0x003C[0:15]  LOS3_CLR_THR              69             0x0045          
 * 0x003F[0:3]   OOF_EN                    15             0xF             
 * 0x003F[4:7]   FAST_OOF_EN               15             0xF             
 * 0x0040[0:2]   OOF_REF_SEL               4              0x4             
 * 0x0041[0:4]   OOF0_DIV_SEL              14             0x0E            
 * 0x0042[0:4]   OOF1_DIV_SEL              13             0x0D            
 * 0x0043[0:4]   OOF2_DIV_SEL              14             0x0E            
 * 0x0044[0:4]   OOF3_DIV_SEL              13             0x0D            
 * 0x0045[0:4]   OOFXO_DIV_SEL             12             0x0C            
 * 0x0046[0:7]   OOF0_SET_THR              50             0x32            
 * 0x0047[0:7]   OOF1_SET_THR              50             0x32            
 * 0x0048[0:7]   OOF2_SET_THR              50             0x32            
 * 0x0049[0:7]   OOF3_SET_THR              50             0x32            
 * 0x004A[0:7]   OOF0_CLR_THR              49             0x31            
 * 0x004B[0:7]   OOF1_CLR_THR              49             0x31            
 * 0x004C[0:7]   OOF2_CLR_THR              49             0x31            
 * 0x004D[0:7]   OOF3_CLR_THR              49             0x31            
 * 0x004E[0:2]   OOF0_DETWIN_SEL           5              0x5             
 * 0x004E[4:6]   OOF1_DETWIN_SEL           5              0x5             
 * 0x004F[0:2]   OOF2_DETWIN_SEL           5              0x5             
 * 0x004F[4:6]   OOF3_DETWIN_SEL           5              0x5             
 * 0x0051[0:3]   FAST_OOF0_SET_THR         3              0x3             
 * 0x0052[0:3]   FAST_OOF1_SET_THR         3              0x3             
 * 0x0053[0:3]   FAST_OOF2_SET_THR         3              0x3             
 * 0x0054[0:3]   FAST_OOF3_SET_THR         3              0x3             
 * 0x0055[0:3]   FAST_OOF0_CLR_THR         2              0x2             
 * 0x0056[0:3]   FAST_OOF1_CLR_THR         2              0x2             
 * 0x0057[0:3]   FAST_OOF2_CLR_THR         2              0x2             
 * 0x0058[0:3]   FAST_OOF3_CLR_THR         2              0x2             
 * 0x0059[0:1]   FAST_OOF0_DETWIN_SEL      3              0x3             
 * 0x0059[2:3]   FAST_OOF1_DETWIN_SEL      3              0x3             
 * 0x0059[4:5]   FAST_OOF2_DETWIN_SEL      3              0x3             
 * 0x0059[6:7]   FAST_OOF3_DETWIN_SEL      3              0x3             
 * 0x005A[0:25]  OOF0_RATIO_REF            13981013       0x0D55555       
 * 0x005E[0:25]  OOF1_RATIO_REF            21845333       0x14D5555       
 * 0x0062[0:25]  OOF2_RATIO_REF            17476266       0x10AAAAA       
 * 0x0066[0:25]  OOF3_RATIO_REF            21845333       0x14D5555       
 * 0x0092[0]     LOL_FST_EN_PLLA           0              0x0             
 * 0x0092[1]     LOL_FST_EN_PLLB           0              0x0             
 * 0x0092[2]     LOL_FST_EN_PLLC           0              0x0             
 * 0x0092[3]     LOL_FST_EN_PLLD           0              0x0             
 * 0x0093[0:3]   LOL_FST_DETWIN_SEL_PLLA   0              0x0             
 * 0x0093[4:7]   LOL_FST_DETWIN_SEL_PLLB   0              0x0             
 * 0x0094[0:3]   LOL_FST_DETWIN_SEL_PLLC   0              0x0             
 * 0x0094[4:7]   LOL_FST_DETWIN_SEL_PLLD   0              0x0             
 * 0x0095[0:1]   LOL_FST_VALWIN_SEL_PLLA   0              0x0             
 * 0x0095[2:3]   LOL_FST_VALWIN_SEL_PLLB   0              0x0             
 * 0x0095[4:5]   LOL_FST_VALWIN_SEL_PLLC   0              0x0             
 * 0x0095[6:7]   LOL_FST_VALWIN_SEL_PLLD   0              0x0             
 * 0x0096[0:3]   LOL_FST_SET_THR_SEL_PLLA  0              0x0             
 * 0x0096[4:7]   LOL_FST_SET_THR_SEL_PLLB  0              0x0             
 * 0x0097[0:3]   LOL_FST_SET_THR_SEL_PLLC  0              0x0             
 * 0x0097[4:7]   LOL_FST_SET_THR_SEL_PLLD  0              0x0             
 * 0x0098[0:3]   LOL_FST_CLR_THR_SEL_PLLA  0              0x0             
 * 0x0098[4:7]   LOL_FST_CLR_THR_SEL_PLLB  0              0x0             
 * 0x0099[0:3]   LOL_FST_CLR_THR_SEL_PLLC  0              0x0             
 * 0x0099[4:7]   LOL_FST_CLR_THR_SEL_PLLD  0              0x0             
 * 0x009A[0]     LOL_SLOW_EN_PLLA          1              0x1             
 * 0x009A[1]     LOL_SLOW_EN_PLLB          1              0x1             
 * 0x009A[2]     LOL_SLOW_EN_PLLC          1              0x1             
 * 0x009A[3]     LOL_SLOW_EN_PLLD          1              0x1             
 * 0x009B[0:3]   LOL_SLW_DETWIN_SEL_PLLA   3              0x3             
 * 0x009B[4:7]   LOL_SLW_DETWIN_SEL_PLLB   4              0x4             
 * 0x009C[0:3]   LOL_SLW_DETWIN_SEL_PLLC   4              0x4             
 * 0x009C[4:7]   LOL_SLW_DETWIN_SEL_PLLD   4              0x4             
 * 0x009D[0:1]   LOL_SLW_VALWIN_SEL_PLLA   0              0x0             
 * 0x009D[2:3]   LOL_SLW_VALWIN_SEL_PLLB   0              0x0             
 * 0x009D[4:5]   LOL_SLW_VALWIN_SEL_PLLC   0              0x0             
 * 0x009D[6:7]   LOL_SLW_VALWIN_SEL_PLLD   0              0x0             
 * 0x009E[0:3]   LOL_SLW_SET_THR_PLLA      2              0x2             
 * 0x009E[4:7]   LOL_SLW_SET_THR_PLLB      2              0x2             
 * 0x009F[0:3]   LOL_SLW_SET_THR_PLLC      2              0x2             
 * 0x009F[4:7]   LOL_SLW_SET_THR_PLLD      2              0x2             
 * 0x00A0[0:3]   LOL_SLW_CLR_THR_PLLA      0              0x0             
 * 0x00A0[4:7]   LOL_SLW_CLR_THR_PLLB      0              0x0             
 * 0x00A1[0:3]   LOL_SLW_CLR_THR_PLLC      0              0x0             
 * 0x00A1[4:7]   LOL_SLW_CLR_THR_PLLD      0              0x0             
 * 0x00A2[0]     LOL_TIMER_EN_PLLA         1              0x1             
 * 0x00A2[1]     LOL_TIMER_EN_PLLB         1              0x1             
 * 0x00A2[2]     LOL_TIMER_EN_PLLC         1              0x1             
 * 0x00A2[3]     LOL_TIMER_EN_PLLD         1              0x1             
 * 0x00A3[0:34]  LOL_CLR_DELAY_PLLA        1104993        0x00010DC61     
 * 0x00A8[0:34]  LOL_CLR_DELAY_PLLB        1218980        0x0001299A4     
 * 0x00AD[0:34]  LOL_CLR_DELAY_PLLC        1218980        0x0001299A4     
 * 0x00B2[0:34]  LOL_CLR_DELAY_PLLD        1379447        0x000150C77     
 * 0x0102[0]     OUTALL_DISABLE_LOW        1              0x1             
 * 0x0108[0]     OUT0_PDN                  0              0x0             
 * 0x0108[1]     OUT0_OE                   1              0x1             
 * 0x0108[2]     OUT0_RDIV_FORCE2          0              0x0             
 * 0x0109[0:2]   OUT0_FORMAT               1              0x1             
 * 0x0109[3]     OUT0_SYNC_EN              1              0x1             
 * 0x0109[4:5]   OUT0_DIS_STATE            0              0x0             
 * 0x0109[6:7]   OUT0_CMOS_DRV             0              0x0             
 * 0x010A[0:3]   OUT0_CM                   11             0xB             
 * 0x010A[4:6]   OUT0_AMPL                 3              0x3             
 * 0x010B[0:2]   OUT0_MUX_SEL              0              0x0             
 * 0x010B[6:7]   OUT0_INV                  0              0x0             
 * 0x010C[0:2]   OUT0_DIS_SRC              1              0x1             
 * 0x0112[0]     OUT1_PDN                  0              0x0             
 * 0x0112[1]     OUT1_OE                   1              0x1             
 * 0x0112[2]     OUT1_RDIV_FORCE2          0              0x0             
 * 0x0113[0:2]   OUT1_FORMAT               1              0x1             
 * 0x0113[3]     OUT1_SYNC_EN              1              0x1             
 * 0x0113[4:5]   OUT1_DIS_STATE            0              0x0             
 * 0x0113[6:7]   OUT1_CMOS_DRV             0              0x0             
 * 0x0114[0:3]   OUT1_CM                   11             0xB             
 * 0x0114[4:6]   OUT1_AMPL                 3              0x3             
 * 0x0115[0:2]   OUT1_MUX_SEL              0              0x0             
 * 0x0115[6:7]   OUT1_INV                  0              0x0             
 * 0x0116[0:2]   OUT1_DIS_SRC              1              0x1             
 * 0x0117[0]     OUT2_PDN                  0              0x0             
 * 0x0117[1]     OUT2_OE                   1              0x1             
 * 0x0117[2]     OUT2_RDIV_FORCE2          0              0x0             
 * 0x0118[0:2]   OUT2_FORMAT               1              0x1             
 * 0x0118[3]     OUT2_SYNC_EN              1              0x1             
 * 0x0118[4:5]   OUT2_DIS_STATE            0              0x0             
 * 0x0118[6:7]   OUT2_CMOS_DRV             0              0x0             
 * 0x0119[0:3]   OUT2_CM                   11             0xB             
 * 0x0119[4:6]   OUT2_AMPL                 3              0x3             
 * 0x011A[0:2]   OUT2_MUX_SEL              0              0x0             
 * 0x011A[6:7]   OUT2_INV                  0              0x0             
 * 0x011B[0:2]   OUT2_DIS_SRC              1              0x1             
 * 0x011C[0]     OUT3_PDN                  0              0x0             
 * 0x011C[1]     OUT3_OE                   1              0x1             
 * 0x011C[2]     OUT3_RDIV_FORCE2          0              0x0             
 * 0x011D[0:2]   OUT3_FORMAT               1              0x1             
 * 0x011D[3]     OUT3_SYNC_EN              1              0x1             
 * 0x011D[4:5]   OUT3_DIS_STATE            0              0x0             
 * 0x011D[6:7]   OUT3_CMOS_DRV             0              0x0             
 * 0x011E[0:3]   OUT3_CM                   11             0xB             
 * 0x011E[4:6]   OUT3_AMPL                 3              0x3             
 * 0x011F[0:2]   OUT3_MUX_SEL              1              0x1             
 * 0x011F[6:7]   OUT3_INV                  0              0x0             
 * 0x0120[0:2]   OUT3_DIS_SRC              2              0x2             
 * 0x0126[0]     OUT4_PDN                  0              0x0             
 * 0x0126[1]     OUT4_OE                   1              0x1             
 * 0x0126[2]     OUT4_RDIV_FORCE2          0              0x0             
 * 0x0127[0:2]   OUT4_FORMAT               1              0x1             
 * 0x0127[3]     OUT4_SYNC_EN              1              0x1             
 * 0x0127[4:5]   OUT4_DIS_STATE            0              0x0             
 * 0x0127[6:7]   OUT4_CMOS_DRV             0              0x0             
 * 0x0128[0:3]   OUT4_CM                   11             0xB             
 * 0x0128[4:6]   OUT4_AMPL                 3              0x3             
 * 0x0129[0:2]   OUT4_MUX_SEL              2              0x2             
 * 0x0129[6:7]   OUT4_INV                  0              0x0             
 * 0x012A[0:2]   OUT4_DIS_SRC              3              0x3             
 * 0x012B[0]     OUT5_PDN                  0              0x0             
 * 0x012B[1]     OUT5_OE                   1              0x1             
 * 0x012B[2]     OUT5_RDIV_FORCE2          0              0x0             
 * 0x012C[0:2]   OUT5_FORMAT               1              0x1             
 * 0x012C[3]     OUT5_SYNC_EN              1              0x1             
 * 0x012C[4:5]   OUT5_DIS_STATE            0              0x0             
 * 0x012C[6:7]   OUT5_CMOS_DRV             0              0x0             
 * 0x012D[0:3]   OUT5_CM                   11             0xB             
 * 0x012D[4:6]   OUT5_AMPL                 3              0x3             
 * 0x012E[0:2]   OUT5_MUX_SEL              2              0x2             
 * 0x012E[6:7]   OUT5_INV                  0              0x0             
 * 0x012F[0:2]   OUT5_DIS_SRC              3              0x3             
 * 0x0130[0]     OUT6_PDN                  0              0x0             
 * 0x0130[1]     OUT6_OE                   1              0x1             
 * 0x0130[2]     OUT6_RDIV_FORCE2          0              0x0             
 * 0x0131[0:2]   OUT6_FORMAT               1              0x1             
 * 0x0131[3]     OUT6_SYNC_EN              1              0x1             
 * 0x0131[4:5]   OUT6_DIS_STATE            0              0x0             
 * 0x0131[6:7]   OUT6_CMOS_DRV             0              0x0             
 * 0x0132[0:3]   OUT6_CM                   11             0xB             
 * 0x0132[4:6]   OUT6_AMPL                 3              0x3             
 * 0x0133[0:2]   OUT6_MUX_SEL              3              0x3             
 * 0x0133[6:7]   OUT6_INV                  0              0x0             
 * 0x0134[0:2]   OUT6_DIS_SRC              4              0x4             
 * 0x013A[0]     OUT7_PDN                  1              0x1             
 * 0x013A[1]     OUT7_OE                   0              0x0             
 * 0x013A[2]     OUT7_RDIV_FORCE2          0              0x0             
 * 0x013B[0:2]   OUT7_FORMAT               1              0x1             
 * 0x013B[3]     OUT7_SYNC_EN              1              0x1             
 * 0x013B[4:5]   OUT7_DIS_STATE            0              0x0             
 * 0x013B[6:7]   OUT7_CMOS_DRV             0              0x0             
 * 0x013C[0:3]   OUT7_CM                   11             0xB             
 * 0x013C[4:6]   OUT7_AMPL                 3              0x3             
 * 0x013D[0:2]   OUT7_MUX_SEL              0              0x0             
 * 0x013D[6:7]   OUT7_INV                  0              0x0             
 * 0x013E[0:2]   OUT7_DIS_SRC              0              0x0             
 * 0x013F[0:11]  OUTX_ALWAYS_ON            0              0x000           
 * 0x0141[0]     OUT_DIS_MSK_PLLA          0              0x0             
 * 0x0141[1]     OUT_DIS_MSK_PLLB          0              0x0             
 * 0x0141[2]     OUT_DIS_MSK_PLLC          0              0x0             
 * 0x0141[3]     OUT_DIS_MSK_PLLD          0              0x0             
 * 0x0141[5]     OUT_DIS_LOL_MSK           0              0x0             
 * 0x0141[6]     OUT_DIS_LOSXAXB_MSK       1              0x1             
 * 0x0141[7]     OUT_DIS_MSK_LOS_PFD       0              0x0             
 * 0x0142[0]     OUT_DIS_MSK_LOL_PLLA      1              0x1             
 * 0x0142[1]     OUT_DIS_MSK_LOL_PLLB      1              0x1             
 * 0x0142[2]     OUT_DIS_MSK_LOL_PLLC      1              0x1             
 * 0x0142[3]     OUT_DIS_MSK_LOL_PLLD      1              0x1             
 * 0x0142[4]     OUT_DIS_MSK_HOLD_PLLA     1              0x1             
 * 0x0142[5]     OUT_DIS_MSK_HOLD_PLLB     1              0x1             
 * 0x0142[6]     OUT_DIS_MSK_HOLD_PLLC     1              0x1             
 * 0x0142[7]     OUT_DIS_MSK_HOLD_PLLD     1              0x1             
 * 0x0202[0:31]  XAXB_FREQ_OFFSET          0              0x00000000      
 * 0x0206[0:1]   PXAXB                     0              0x0             
 * 0x0208[0:47]  P0_NUM                    96             0x000000000060  
 * 0x020E[0:31]  P0_DEN                    1              0x00000001      
 * 0x0212[0:47]  P1_NUM                    75             0x00000000004B  
 * 0x0218[0:31]  P1_DEN                    1              0x00000001      
 * 0x021C[0:47]  P2_NUM                    120            0x000000000078  
 * 0x0222[0:31]  P2_DEN                    1              0x00000001      
 * 0x0226[0:47]  P3_NUM                    75             0x00000000004B  
 * 0x022C[0:31]  P3_DEN                    1              0x00000001      
 * 0x0231[0:3]   P0_FRACN_MODE             1              0x1             
 * 0x0231[4]     P0_FRACN_EN               0              0x0             
 * 0x0232[0:3]   P1_FRACN_MODE             1              0x1             
 * 0x0232[4]     P1_FRACN_EN               0              0x0             
 * 0x0233[0:3]   P2_FRACN_MODE             1              0x1             
 * 0x0233[4]     P2_FRACN_EN               0              0x0             
 * 0x0234[0:3]   P3_FRACN_MODE             1              0x1             
 * 0x0234[4]     P3_FRACN_EN               0              0x0             
 * 0x0235[0:43]  MXAXB_NUM                 635655159808   0x09400000000   
 * 0x023B[0:31]  MXAXB_DEN                 2147483648     0x80000000      
 * 0x0240[0]     MXAXB_FSTEP_MSK           0              0x0             
 * 0x0240[1]     MXAXB_FSTEP_DEN           0              0x0             
 * 0x0241[0:43]  MXAXB_FSTEPW              0              0x00000000000   
 * 0x024A[0:23]  R0_REG                    2              0x000002        
 * 0x0250[0:23]  R1_REG                    2              0x000002        
 * 0x0253[0:23]  R2_REG                    2              0x000002        
 * 0x0256[0:23]  R3_REG                    2              0x000002        
 * 0x025C[0:23]  R4_REG                    2              0x000002        
 * 0x025F[0:23]  R5_REG                    2              0x000002        
 * 0x0262[0:23]  R6_REG                    1              0x000001        
 * 0x0268[0:23]  R7_REG                    0              0x000000        
 * 0x026B[0:7]   DESIGN_ID0                53             0x35            
 * 0x026C[0:7]   DESIGN_ID1                51             0x33            
 * 0x026D[0:7]   DESIGN_ID2                52             0x34            
 * 0x026E[0:7]   DESIGN_ID3                55             0x37            
 * 0x026F[0:7]   DESIGN_ID4                69             0x45            
 * 0x0270[0:7]   DESIGN_ID5                86             0x56            
 * 0x0271[0:7]   DESIGN_ID6                66             0x42            
 * 0x0272[0:7]   DESIGN_ID7                49             0x31            
 * 0x0302[0:43]  N0_NUM                    39728447488    0x00940000000   
 * 0x0308[0:31]  N0_DEN                    2684354560     0xA0000000      
 * 0x030D[0:43]  N1_NUM                    79456894976    0x01280000000   
 * 0x0313[0:31]  N1_DEN                    4194304000     0xFA000000      
 * 0x0318[0:43]  N2_NUM                    79456894976    0x01280000000   
 * 0x031E[0:31]  N2_DEN                    4194304000     0xFA000000      
 * 0x0323[0:43]  N3_NUM                    59592671232    0x00DE0000000   
 * 0x0329[0:31]  N3_DEN                    3355443200     0xC8000000      
 * 0x0339[0:4]   N_FSTEP_MSK               0              0x00            
 * 0x033B[0:43]  N0_FSTEPW                 0              0x00000000000   
 * 0x0341[0:43]  N1_FSTEPW                 0              0x00000000000   
 * 0x0347[0:43]  N2_FSTEPW                 0              0x00000000000   
 * 0x034D[0:43]  N3_FSTEPW                 0              0x00000000000   
 * 0x0402[0]     PFD_PDNB_PLLA             1              0x1             
 * 0x0402[1]     PFD_RST_PLLA              0              0x0             
 * 0x0402[2]     M_RST_PLLA                0              0x0             
 * 0x0402[3]     PFD_CLKM_STOP_PLLA        0              0x0             
 * 0x0402[4]     ADD_DIV256_PLLA           0              0x0             
 * 0x0408[0:5]   BW0_PLLA                  16             0x10            
 * 0x0409[0:5]   BW1_PLLA                  30             0x1E            
 * 0x040A[0:5]   BW2_PLLA                  13             0x0D            
 * 0x040B[0:5]   BW3_PLLA                  12             0x0C            
 * 0x040C[0:5]   BW4_PLLA                  1              0x01            
 * 0x040D[0:5]   BW5_PLLA                  63             0x3F            
 * 0x040E[0:5]   FAST_BW0_PLLA             20             0x14            
 * 0x040F[0:5]   FAST_BW1_PLLA             40             0x28            
 * 0x0410[0:5]   FAST_BW2_PLLA             9              0x09            
 * 0x0411[0:5]   FAST_BW3_PLLA             8              0x08            
 * 0x0412[0:5]   FAST_BW4_PLLA             1              0x01            
 * 0x0413[0:5]   FAST_BW5_PLLA             63             0x3F            
 * 0x0415[0:55]  M_NUM_PLLA                1236950581248  0x00012000000000
 * 0x041C[0:31]  M_DEN_PLLA                2147483648     0x80000000      
 * 0x0421[0:3]   M_FRAC_MODE_PLLA          1              0x1             
 * 0x0421[4]     M_FRAC_EN_PLLA            0              0x0             
 * 0x0422[0]     M_FSTEP_MSK_PLLA          1              0x1             
 * 0x0422[1]     M_FSTEPW_DEN_PLLA         0              0x0             
 * 0x0423[0:55]  M_FSTEPW_PLLA             0              0x00000000000000
 * 0x042A[0:2]   IN_SEL_PLLA               0              0x0             
 * 0x042B[0]     FASTLOCK_AUTO_EN_PLLA     1              0x1             
 * 0x042B[1]     FASTLOCK_MAN_PLLA         0              0x0             
 * 0x042C[0]     HOLD_EN_PLLA              1              0x1             
 * 0x042C[3]     HOLD_RAMP_BYP_PLLA        1              0x1             
 * 0x042C[5:7]   HOLD_RAMP_RATE_PLLA       0              0x0             
 * 0x042D[1]     HOLD_RAMPBYP_NOHIST_PLLA  1              0x1             
 * 0x042E[0:4]   HOLD_HIST_LEN_PLLA        25             0x19            
 * 0x042F[0:4]   HOLD_HIST_DELAY_PLLA      25             0x19            
 * 0x0431[0:4]   HOLD_REF_COUNT_FRC_PLLA   0              0x00            
 * 0x0432[0:23]  HOLD_15M_CYC_COUNT_PLLA   1000           0x0003E8        
 * 0x0436[0:1]   CLK_SWITCH_MODE_PLLA      0              0x0             
 * 0x0436[2]     HSW_EN_PLLA               1              0x1             
 * 0x0436[3]     HSW_RAMP_BYP_PLLA         1              0x1             
 * 0x0437[0:3]   IN_LOS_MSK_PLLA           0              0x0             
 * 0x0437[4:7]   IN_OOF_MSK_PLLA           0              0x0             
 * 0x0438[0:2]   IN0_PRIORITY_PLLA         1              0x1             
 * 0x0438[4:6]   IN1_PRIORITY_PLLA         0              0x0             
 * 0x0439[0:2]   IN2_PRIORITY_PLLA         0              0x0             
 * 0x0439[4:6]   IN3_PRIORITY_PLLA         0              0x0             
 * 0x0502[4]     ADD_DIV256_PLLB           0              0x0             
 * 0x0508[0:5]   BW0_PLLB                  16             0x10            
 * 0x0509[0:5]   BW1_PLLB                  30             0x1E            
 * 0x050A[0:5]   BW2_PLLB                  14             0x0E            
 * 0x050B[0:5]   BW3_PLLB                  13             0x0D            
 * 0x050C[0:5]   BW4_PLLB                  1              0x01            
 * 0x050D[0:5]   BW5_PLLB                  63             0x3F            
 * 0x050E[0:5]   FAST_BW0_PLLB             21             0x15            
 * 0x050F[0:5]   FAST_BW1_PLLB             42             0x2A            
 * 0x0510[0:5]   FAST_BW2_PLLB             9              0x09            
 * 0x0511[0:5]   FAST_BW3_PLLB             8              0x08            
 * 0x0512[0:5]   FAST_BW4_PLLB             1              0x01            
 * 0x0513[0:5]   FAST_BW5_PLLB             63             0x3F            
 * 0x0515[0:55]  M_NUM_PLLB                966367641600   0x0000E100000000
 * 0x051C[0:31]  M_DEN_PLLB                2147483648     0x80000000      
 * 0x0521[0:3]   M_FRAC_MODE_PLLB          1              0x1             
 * 0x0521[4]     M_FRAC_EN_PLLB            0              0x0             
 * 0x0522[0]     M_FSTEP_MSK_PLLB          1              0x1             
 * 0x0522[1]     M_FSTEPW_DEN_PLLB         0              0x0             
 * 0x0523[0:55]  M_FSTEPW_PLLB             0              0x00000000000000
 * 0x052A[0]     IN_SEL_REGCTRL_PLLB       1              0x1             
 * 0x052A[1:3]   IN_SEL_PLLB               0              0x0             
 * 0x052B[0]     FASTLOCK_AUTO_EN_PLLB     1              0x1             
 * 0x052B[1]     FASTLOCK_MAN_PLLB         0              0x0             
 * 0x052C[0]     HOLD_EN_PLLB              1              0x1             
 * 0x052C[3]     HOLD_RAMP_BYP_PLLB        1              0x1             
 * 0x052C[5:7]   HOLD_RAMP_RATE_PLLB       0              0x0             
 * 0x052D[1]     HOLD_RAMPBYP_NOHIST_PLLB  1              0x1             
 * 0x052E[0:4]   HOLD_HIST_LEN_PLLB        25             0x19            
 * 0x052F[0:4]   HOLD_HIST_DELAY_PLLB      25             0x19            
 * 0x0531[0:4]   HOLD_REF_COUNT_FRC_PLLB   0              0x00            
 * 0x0532[0:23]  HOLD_15M_CYC_COUNT_PLLB   1000           0x0003E8        
 * 0x0536[0:1]   CLK_SWITCH_MODE_PLLB      0              0x0             
 * 0x0536[2]     HSW_EN_PLLB               1              0x1             
 * 0x0536[3]     HSW_RAMP_BYP_PLLB         1              0x1             
 * 0x0537[0:3]   IN_LOS_MSK_PLLB           0              0x0             
 * 0x0537[4:7]   IN_OOF_MSK_PLLB           0              0x0             
 * 0x0538[0:2]   IN0_PRIORITY_PLLB         1              0x1             
 * 0x0538[4:6]   IN1_PRIORITY_PLLB         2              0x2             
 * 0x0539[0:2]   IN2_PRIORITY_PLLB         3              0x3             
 * 0x0539[4:6]   IN3_PRIORITY_PLLB         0              0x0             
 * 0x0602[4]     ADD_DIV256_PLLC           0              0x0             
 * 0x0608[0:5]   BW0_PLLC                  16             0x10            
 * 0x0609[0:5]   BW1_PLLC                  30             0x1E            
 * 0x060A[0:5]   BW2_PLLC                  14             0x0E            
 * 0x060B[0:5]   BW3_PLLC                  13             0x0D            
 * 0x060C[0:5]   BW4_PLLC                  1              0x01            
 * 0x060D[0:5]   BW5_PLLC                  63             0x3F            
 * 0x060E[0:5]   FAST_BW0_PLLC             21             0x15            
 * 0x060F[0:5]   FAST_BW1_PLLC             42             0x2A            
 * 0x0610[0:5]   FAST_BW2_PLLC             9              0x09            
 * 0x0611[0:5]   FAST_BW3_PLLC             8              0x08            
 * 0x0612[0:5]   FAST_BW4_PLLC             1              0x01            
 * 0x0613[0:5]   FAST_BW5_PLLC             63             0x3F            
 * 0x0615[0:55]  M_NUM_PLLC                966367641600   0x0000E100000000
 * 0x061C[0:31]  M_DEN_PLLC                2147483648     0x80000000      
 * 0x0621[0:3]   M_FRAC_MODE_PLLC          1              0x1             
 * 0x0621[4]     M_FRAC_EN_PLLC            0              0x0             
 * 0x0622[0]     M_FSTEP_MSK_PLLC          1              0x1             
 * 0x0622[1]     M_FSTEPW_DEN_PLLC         0              0x0             
 * 0x0623[0:55]  M_FSTEPW_PLLC             0              0x00000000000000
 * 0x062A[0:2]   IN_SEL_PLLC               0              0x0             
 * 0x062B[0]     FASTLOCK_AUTO_EN_PLLC     1              0x1             
 * 0x062B[1]     FASTLOCK_MAN_PLLC         0              0x0             
 * 0x062C[0]     HOLD_EN_PLLC              1              0x1             
 * 0x062C[3]     HOLD_RAMP_BYP_PLLC        1              0x1             
 * 0x062C[5:7]   HOLD_RAMP_RATE_PLLC       0              0x0             
 * 0x062D[1]     HOLD_RAMPBYP_NOHIST_PLLC  1              0x1             
 * 0x062E[0:4]   HOLD_HIST_LEN_PLLC        25             0x19            
 * 0x062F[0:4]   HOLD_HIST_DELAY_PLLC      25             0x19            
 * 0x0631[0:4]   HOLD_REF_COUNT_FRC_PLLC   0              0x00            
 * 0x0632[0:23]  HOLD_15M_CYC_COUNT_PLLC   1000           0x0003E8        
 * 0x0636[0:1]   CLK_SWITCH_MODE_PLLC      0              0x0             
 * 0x0636[2]     HSW_EN_PLLC               1              0x1             
 * 0x0636[3]     HSW_RAMP_BYP_PLLC         1              0x1             
 * 0x0637[0:3]   IN_LOS_MSK_PLLC           0              0x0             
 * 0x0637[4:7]   IN_OOF_MSK_PLLC           0              0x0             
 * 0x0638[0:2]   IN0_PRIORITY_PLLC         1              0x1             
 * 0x0638[4:6]   IN1_PRIORITY_PLLC         0              0x0             
 * 0x0639[0:2]   IN2_PRIORITY_PLLC         0              0x0             
 * 0x0639[4:6]   IN3_PRIORITY_PLLC         4              0x4             
 * 0x0702[4]     ADD_DIV256_PLLD           0              0x0             
 * 0x0709[0:5]   BW0_PLLD                  16             0x10            
 * 0x070A[0:5]   BW1_PLLD                  30             0x1E            
 * 0x070B[0:5]   BW2_PLLD                  13             0x0D            
 * 0x070C[0:5]   BW3_PLLD                  12             0x0C            
 * 0x070D[0:5]   BW4_PLLD                  1              0x01            
 * 0x070E[0:5]   BW5_PLLD                  63             0x3F            
 * 0x070F[0:5]   FAST_BW0_PLLD             21             0x15            
 * 0x0710[0:5]   FAST_BW1_PLLD             42             0x2A            
 * 0x0711[0:5]   FAST_BW2_PLLD             8              0x08            
 * 0x0712[0:5]   FAST_BW3_PLLD             7              0x07            
 * 0x0713[0:5]   FAST_BW4_PLLD             1              0x01            
 * 0x0714[0:5]   FAST_BW5_PLLD             63             0x3F            
 * 0x0716[0:55]  M_NUM_PLLD                1030792151040  0x0000F000000000
 * 0x071D[0:31]  M_DEN_PLLD                2147483648     0x80000000      
 * 0x0722[0:3]   M_FRAC_MODE_PLLD          1              0x1             
 * 0x0722[4]     M_FRAC_EN_PLLD            0              0x0             
 * 0x0723[0]     M_FSTEP_MSK_PLLD          1              0x1             
 * 0x0723[1]     M_FSTEPW_DEN_PLLD         0              0x0             
 * 0x0724[0:55]  M_FSTEPW_PLLD             0              0x00000000000000
 * 0x072B[0:2]   IN_SEL_PLLD               0              0x0             
 * 0x072C[0]     FASTLOCK_AUTO_EN_PLLD     1              0x1             
 * 0x072C[1]     FASTLOCK_MAN_PLLD         0              0x0             
 * 0x072D[0]     HOLD_EN_PLLD              1              0x1             
 * 0x072D[3]     HOLD_RAMP_BYP_PLLD        1              0x1             
 * 0x072D[5:7]   HOLD_RAMP_RATE_PLLD       0              0x0             
 * 0x072E[1]     HOLD_RAMPBYP_NOHIST_PLLD  1              0x1             
 * 0x072F[0:4]   HOLD_HIST_LEN_PLLD        25             0x19            
 * 0x0730[0:4]   HOLD_HIST_DELAY_PLLD      25             0x19            
 * 0x0732[0:4]   HOLD_REF_COUNT_FRC_PLLD   0              0x00            
 * 0x0733[0:23]  HOLD_15M_CYC_COUNT_PLLD   1000           0x0003E8        
 * 0x0737[0:1]   CLK_SWITCH_MODE_PLLD      0              0x0             
 * 0x0737[2]     HSW_EN_PLLD               1              0x1             
 * 0x0737[3]     HSW_RAMP_BYP_PLLD         1              0x1             
 * 0x0738[0:3]   IN_LOS_MSK_PLLD           0              0x0             
 * 0x0738[4:7]   IN_OOF_MSK_PLLD           0              0x0             
 * 0x0739[0:2]   IN0_PRIORITY_PLLD         1              0x1             
 * 0x0739[4:6]   IN1_PRIORITY_PLLD         2              0x2             
 * 0x073A[0:2]   IN2_PRIORITY_PLLD         0              0x0             
 * 0x073A[4:6]   IN3_PRIORITY_PLLD         0              0x0             
 * 0x090E[0]     XAXB_EXTCLK_EN            0              0x0             
 * 0x0943[0]     IO_VDD_SEL                1              0x1             
 * 0x0949[0:3]   IN_EN                     15             0xF             
 * 0x0949[4:7]   IN_PULSED_CMOS_EN         0              0x0             
 * 0x094A[0:3]   INX_TO_PFD_EN             15             0xF             
 * 0x0A03[0:4]   N_CLK_TO_OUTX_EN          15             0x0F            
 * 0x0A04[0:4]   N_PIBYP                   0              0x00            
 * 0x0A05[0:4]   N_PDNB                    15             0x0F            
 * 0x0B44[0:3]   PDIV_FRACN_CLK_DIS        15             0xF             
 * 0x0B44[4]     FRACN_CLK_DIS_PLLA        1              0x1             
 * 0x0B44[5]     FRACN_CLK_DIS_PLLB        1              0x1             
 * 0x0B44[6]     FRACN_CLK_DIS_PLLC        1              0x1             
 * 0x0B44[7]     FRACN_CLK_DIS_PLLD        1              0x1             
 * 0x0B45[0]     CLK_DIS_PLLA              0              0x0             
 * 0x0B45[1]     CLK_DIS_PLLB              0              0x0             
 * 0x0B45[2]     CLK_DIS_PLLC              0              0x0             
 * 0x0B45[3]     CLK_DIS_PLLD              0              0x0             
 * 0x0B46[0:3]   LOS_CLK_DIS               0              0x0             
 * 0x0B47[0:4]   OOF_CLK_DIS               0              0x00            
 * 0x0B48[0:4]   OOF_DIV_CLK_DIS           0              0x00            
 * 0x0B4A[0:4]   N_CLK_DIS                 0              0x00
 * 
 *
 */

#endif
