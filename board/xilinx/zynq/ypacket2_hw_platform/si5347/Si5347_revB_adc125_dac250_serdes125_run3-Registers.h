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
 * Created By:                                         ClockBuilder Pro v2.9 [2016-07-29]
 * Timestamp:                                          2017-06-26 19:03:02 GMT+03:00
 *
 * A complete design report corresponding to this export is included at the end 
 * of this header file.
 *
 */

#ifndef SI5347AB_REVB_REG_CONFIG_HEADER
#define SI5347AB_REVB_REG_CONFIG_HEADER

#define SI5347AB_REVB_REG_CONFIG_NUM_REGS				643

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5347ab_revb_register_t;

si5347ab_revb_register_t const si5347ab_revb_registers[SI5347AB_REVB_REG_CONFIG_NUM_REGS] =
{
	{ 0x0B24, 0xD8 },
	{ 0x0B25, 0x00 },
	{ 0x000B, 0x6C },
	{ 0x0016, 0x0F },
	{ 0x0017, 0x1C },
	{ 0x0018, 0x00 },
	{ 0x0019, 0x88 },
	{ 0x001A, 0x8F },
	{ 0x0020, 0x01 },
	{ 0x002B, 0x02 },
	{ 0x002C, 0x0F },
	{ 0x002D, 0x55 },
	{ 0x002E, 0x3A },
	{ 0x002F, 0x00 },
	{ 0x0030, 0x3C },
	{ 0x0031, 0x00 },
	{ 0x0032, 0x3C },
	{ 0x0033, 0x00 },
	{ 0x0034, 0x3C },
	{ 0x0035, 0x00 },
	{ 0x0036, 0x3A },
	{ 0x0037, 0x00 },
	{ 0x0038, 0x3C },
	{ 0x0039, 0x00 },
	{ 0x003A, 0x3C },
	{ 0x003B, 0x00 },
	{ 0x003C, 0x3C },
	{ 0x003D, 0x00 },
	{ 0x003F, 0xFF },
	{ 0x0040, 0x04 },
	{ 0x0041, 0x0D },
	{ 0x0042, 0x0B },
	{ 0x0043, 0x0D },
	{ 0x0044, 0x0D },
	{ 0x0045, 0x0C },
	{ 0x0046, 0x32 },
	{ 0x0047, 0x32 },
	{ 0x0048, 0x32 },
	{ 0x0049, 0x32 },
	{ 0x004A, 0x31 },
	{ 0x004B, 0x31 },
	{ 0x004C, 0x31 },
	{ 0x004D, 0x31 },
	{ 0x004E, 0x55 },
	{ 0x004F, 0x55 },
	{ 0x0051, 0x03 },
	{ 0x0052, 0x03 },
	{ 0x0053, 0x03 },
	{ 0x0054, 0x03 },
	{ 0x0055, 0x02 },
	{ 0x0056, 0x02 },
	{ 0x0057, 0x02 },
	{ 0x0058, 0x02 },
	{ 0x0059, 0xFF },
	{ 0x005A, 0x00 },
	{ 0x005B, 0x00 },
	{ 0x005C, 0x40 },
	{ 0x005D, 0x01 },
	{ 0x005E, 0x00 },
	{ 0x005F, 0x00 },
	{ 0x0060, 0x00 },
	{ 0x0061, 0x01 },
	{ 0x0062, 0x00 },
	{ 0x0063, 0x00 },
	{ 0x0064, 0x40 },
	{ 0x0065, 0x01 },
	{ 0x0066, 0x00 },
	{ 0x0067, 0x00 },
	{ 0x0068, 0x40 },
	{ 0x0069, 0x01 },
	{ 0x0092, 0x00 },
	{ 0x0093, 0x00 },
	{ 0x0094, 0x00 },
	{ 0x0095, 0x00 },
	{ 0x0096, 0x00 },
	{ 0x0097, 0x00 },
	{ 0x0098, 0x00 },
	{ 0x0099, 0x00 },
	{ 0x009A, 0x07 },
	{ 0x009B, 0x33 },
	{ 0x009C, 0x03 },
	{ 0x009D, 0x00 },
	{ 0x009E, 0x22 },
	{ 0x009F, 0x02 },
	{ 0x00A0, 0x00 },
	{ 0x00A1, 0x00 },
	{ 0x00A2, 0x07 },
	{ 0x00A3, 0x8A },
	{ 0x00A4, 0x90 },
	{ 0x00A5, 0x19 },
	{ 0x00A6, 0x00 },
	{ 0x00A7, 0x00 },
	{ 0x00A8, 0xF0 },
	{ 0x00A9, 0x1F },
	{ 0x00AA, 0x13 },
	{ 0x00AB, 0x00 },
	{ 0x00AC, 0x00 },
	{ 0x00AD, 0xF0 },
	{ 0x00AE, 0x1F },
	{ 0x00AF, 0x13 },
	{ 0x00B0, 0x00 },
	{ 0x00B1, 0x00 },
	{ 0x00B2, 0x00 },
	{ 0x00B3, 0x00 },
	{ 0x00B4, 0x00 },
	{ 0x00B5, 0x00 },
	{ 0x00B6, 0x00 },
	{ 0x0102, 0x01 },
	{ 0x0108, 0x02 },
	{ 0x0109, 0x09 },
	{ 0x010A, 0x3D },
	{ 0x010B, 0x00 },
	{ 0x010C, 0x01 },
	{ 0x0112, 0x02 },
	{ 0x0113, 0x09 },
	{ 0x0114, 0x3D },
	{ 0x0115, 0x01 },
	{ 0x0116, 0x02 },
	{ 0x0117, 0x02 },
	{ 0x0118, 0x8C },
	{ 0x0119, 0x00 },
	{ 0x011A, 0x02 },
	{ 0x011B, 0x03 },
	{ 0x011C, 0x02 },
	{ 0x011D, 0x09 },
	{ 0x011E, 0x3D },
	{ 0x011F, 0x03 },
	{ 0x0120, 0x04 },
	{ 0x0126, 0x02 },
	{ 0x0127, 0x09 },
	{ 0x0128, 0x3D },
	{ 0x0129, 0x01 },
	{ 0x012A, 0x02 },
	{ 0x012B, 0x02 },
	{ 0x012C, 0x09 },
	{ 0x012D, 0x3D },
	{ 0x012E, 0x00 },
	{ 0x012F, 0x01 },
	{ 0x0130, 0x02 },
	{ 0x0131, 0x09 },
	{ 0x0132, 0x3D },
	{ 0x0133, 0x00 },
	{ 0x0134, 0x01 },
	{ 0x013A, 0x02 },
	{ 0x013B, 0x09 },
	{ 0x013C, 0x3D },
	{ 0x013D, 0x00 },
	{ 0x013E, 0x01 },
	{ 0x013F, 0x00 },
	{ 0x0140, 0x00 },
	{ 0x0141, 0x40 },
	{ 0x0142, 0xFF },
	{ 0x0202, 0x00 },
	{ 0x0203, 0x00 },
	{ 0x0204, 0x00 },
	{ 0x0205, 0x00 },
	{ 0x0206, 0x00 },
	{ 0x0208, 0x3F },
	{ 0x0209, 0x00 },
	{ 0x020A, 0x00 },
	{ 0x020B, 0x00 },
	{ 0x020C, 0x00 },
	{ 0x020D, 0x00 },
	{ 0x020E, 0x01 },
	{ 0x020F, 0x00 },
	{ 0x0210, 0x00 },
	{ 0x0211, 0x00 },
	{ 0x0212, 0x0D },
	{ 0x0213, 0x00 },
	{ 0x0214, 0x00 },
	{ 0x0215, 0x00 },
	{ 0x0216, 0x00 },
	{ 0x0217, 0x00 },
	{ 0x0218, 0x01 },
	{ 0x0219, 0x00 },
	{ 0x021A, 0x00 },
	{ 0x021B, 0x00 },
	{ 0x021C, 0x41 },
	{ 0x021D, 0x00 },
	{ 0x021E, 0x00 },
	{ 0x021F, 0x00 },
	{ 0x0220, 0x00 },
	{ 0x0221, 0x00 },
	{ 0x0222, 0x01 },
	{ 0x0223, 0x00 },
	{ 0x0224, 0x00 },
	{ 0x0225, 0x00 },
	{ 0x0226, 0x41 },
	{ 0x0227, 0x00 },
	{ 0x0228, 0x00 },
	{ 0x0229, 0x00 },
	{ 0x022A, 0x00 },
	{ 0x022B, 0x00 },
	{ 0x022C, 0x01 },
	{ 0x022D, 0x00 },
	{ 0x022E, 0x00 },
	{ 0x022F, 0x00 },
	{ 0x0231, 0x01 },
	{ 0x0232, 0x01 },
	{ 0x0233, 0x01 },
	{ 0x0234, 0x01 },
	{ 0x0235, 0x00 },
	{ 0x0236, 0x00 },
	{ 0x0237, 0x00 },
	{ 0x0238, 0x00 },
	{ 0x0239, 0x8E },
	{ 0x023A, 0x00 },
	{ 0x023B, 0x00 },
	{ 0x023C, 0x00 },
	{ 0x023D, 0x00 },
	{ 0x023E, 0x80 },
	{ 0x0240, 0x00 },
	{ 0x0241, 0x00 },
	{ 0x0242, 0x00 },
	{ 0x0243, 0x00 },
	{ 0x0244, 0x00 },
	{ 0x0245, 0x00 },
	{ 0x0246, 0x00 },
	{ 0x024A, 0x03 },
	{ 0x024B, 0x00 },
	{ 0x024C, 0x00 },
	{ 0x0250, 0x02 },
	{ 0x0251, 0x00 },
	{ 0x0252, 0x00 },
	{ 0x0253, 0x0E },
	{ 0x0254, 0x00 },
	{ 0x0255, 0x00 },
	{ 0x0256, 0x02 },
	{ 0x0257, 0x00 },
	{ 0x0258, 0x00 },
	{ 0x025C, 0x02 },
	{ 0x025D, 0x00 },
	{ 0x025E, 0x00 },
	{ 0x025F, 0x03 },
	{ 0x0260, 0x00 },
	{ 0x0261, 0x00 },
	{ 0x0262, 0x01 },
	{ 0x0263, 0x00 },
	{ 0x0264, 0x00 },
	{ 0x0268, 0x03 },
	{ 0x0269, 0x00 },
	{ 0x026A, 0x00 },
	{ 0x026B, 0x35 },
	{ 0x026C, 0x33 },
	{ 0x026D, 0x34 },
	{ 0x026E, 0x37 },
	{ 0x026F, 0x45 },
	{ 0x0270, 0x56 },
	{ 0x0271, 0x42 },
	{ 0x0272, 0x31 },
	{ 0x0302, 0x00 },
	{ 0x0303, 0x00 },
	{ 0x0304, 0x00 },
	{ 0x0305, 0xE0 },
	{ 0x0306, 0x08 },
	{ 0x0307, 0x00 },
	{ 0x0308, 0x00 },
	{ 0x0309, 0x00 },
	{ 0x030A, 0x00 },
	{ 0x030B, 0xA0 },
	{ 0x030C, 0x00 },
	{ 0x030D, 0x00 },
	{ 0x030E, 0x00 },
	{ 0x030F, 0x00 },
	{ 0x0310, 0xC0 },
	{ 0x0311, 0x11 },
	{ 0x0312, 0x00 },
	{ 0x0313, 0x00 },
	{ 0x0314, 0x00 },
	{ 0x0315, 0x00 },
	{ 0x0316, 0xF0 },
	{ 0x0317, 0x00 },
	{ 0x0318, 0x00 },
	{ 0x0319, 0x00 },
	{ 0x031A, 0x00 },
	{ 0x031B, 0xC0 },
	{ 0x031C, 0x11 },
	{ 0x031D, 0x00 },
	{ 0x031E, 0x00 },
	{ 0x031F, 0x00 },
	{ 0x0320, 0x00 },
	{ 0x0321, 0xF0 },
	{ 0x0322, 0x00 },
	{ 0x0323, 0x00 },
	{ 0x0324, 0x00 },
	{ 0x0325, 0x00 },
	{ 0x0326, 0xC0 },
	{ 0x0327, 0x11 },
	{ 0x0328, 0x00 },
	{ 0x0329, 0x00 },
	{ 0x032A, 0x00 },
	{ 0x032B, 0x00 },
	{ 0x032C, 0xF0 },
	{ 0x032D, 0x00 },
	{ 0x0338, 0x00 },
	{ 0x0339, 0x00 },
	{ 0x033B, 0x00 },
	{ 0x033C, 0x00 },
	{ 0x033D, 0x00 },
	{ 0x033E, 0x00 },
	{ 0x033F, 0x00 },
	{ 0x0340, 0x00 },
	{ 0x0341, 0x00 },
	{ 0x0342, 0x00 },
	{ 0x0343, 0x00 },
	{ 0x0344, 0x00 },
	{ 0x0345, 0x00 },
	{ 0x0346, 0x00 },
	{ 0x0347, 0x00 },
	{ 0x0348, 0x00 },
	{ 0x0349, 0x00 },
	{ 0x034A, 0x00 },
	{ 0x034B, 0x00 },
	{ 0x034C, 0x00 },
	{ 0x034D, 0x00 },
	{ 0x034E, 0x00 },
	{ 0x034F, 0x00 },
	{ 0x0350, 0x00 },
	{ 0x0351, 0x00 },
	{ 0x0352, 0x00 },
	{ 0x0402, 0x01 },
	{ 0x0408, 0x0F },
	{ 0x0409, 0x1C },
	{ 0x040A, 0x0E },
	{ 0x040B, 0x0D },
	{ 0x040C, 0x01 },
	{ 0x040D, 0x3F },
	{ 0x040E, 0x14 },
	{ 0x040F, 0x28 },
	{ 0x0410, 0x09 },
	{ 0x0411, 0x08 },
	{ 0x0412, 0x01 },
	{ 0x0413, 0x3F },
	{ 0x0415, 0x00 },
	{ 0x0416, 0x00 },
	{ 0x0417, 0x00 },
	{ 0x0418, 0x00 },
	{ 0x0419, 0xFC },
	{ 0x041A, 0x00 },
	{ 0x041B, 0x00 },
	{ 0x041C, 0x00 },
	{ 0x041D, 0x00 },
	{ 0x041E, 0x00 },
	{ 0x041F, 0x80 },
	{ 0x0421, 0x21 },
	{ 0x0422, 0x01 },
	{ 0x0423, 0x00 },
	{ 0x0424, 0x00 },
	{ 0x0425, 0x00 },
	{ 0x0426, 0x00 },
	{ 0x0427, 0x00 },
	{ 0x0428, 0x00 },
	{ 0x0429, 0x00 },
	{ 0x042A, 0x00 },
	{ 0x042B, 0x01 },
	{ 0x042C, 0x0F },
	{ 0x042D, 0x03 },
	{ 0x042E, 0x19 },
	{ 0x042F, 0x19 },
	{ 0x0431, 0x00 },
	{ 0x0432, 0x48 },
	{ 0x0433, 0x03 },
	{ 0x0434, 0x00 },
	{ 0x0435, 0x00 },
	{ 0x0436, 0x0C },
	{ 0x0437, 0x00 },
	{ 0x0438, 0x00 },
	{ 0x0439, 0x00 },
	{ 0x0442, 0x00 },
	{ 0x0443, 0x00 },
	{ 0x0444, 0x00 },
	{ 0x0445, 0x00 },
	{ 0x0502, 0x01 },
	{ 0x0508, 0x10 },
	{ 0x0509, 0x1E },
	{ 0x050A, 0x0D },
	{ 0x050B, 0x0C },
	{ 0x050C, 0x01 },
	{ 0x050D, 0x3F },
	{ 0x050E, 0x14 },
	{ 0x050F, 0x28 },
	{ 0x0510, 0x09 },
	{ 0x0511, 0x08 },
	{ 0x0512, 0x01 },
	{ 0x0513, 0x3F },
	{ 0x0515, 0x00 },
	{ 0x0516, 0x00 },
	{ 0x0517, 0x00 },
	{ 0x0518, 0x00 },
	{ 0x0519, 0xC3 },
	{ 0x051A, 0x00 },
	{ 0x051B, 0x00 },
	{ 0x051C, 0x00 },
	{ 0x051D, 0x00 },
	{ 0x051E, 0x00 },
	{ 0x051F, 0x80 },
	{ 0x0521, 0x21 },
	{ 0x0522, 0x01 },
	{ 0x0523, 0x00 },
	{ 0x0524, 0x00 },
	{ 0x0525, 0x00 },
	{ 0x0526, 0x00 },
	{ 0x0527, 0x00 },
	{ 0x0528, 0x00 },
	{ 0x0529, 0x00 },
	{ 0x052A, 0x05 },
	{ 0x052B, 0x01 },
	{ 0x052C, 0x0F },
	{ 0x052D, 0x03 },
	{ 0x052E, 0x19 },
	{ 0x052F, 0x19 },
	{ 0x0531, 0x00 },
	{ 0x0532, 0x63 },
	{ 0x0533, 0x03 },
	{ 0x0534, 0x00 },
	{ 0x0535, 0x00 },
	{ 0x0536, 0x0C },
	{ 0x0537, 0x00 },
	{ 0x0538, 0x00 },
	{ 0x0539, 0x00 },
	{ 0x0542, 0x00 },
	{ 0x0543, 0x00 },
	{ 0x0544, 0x00 },
	{ 0x0545, 0x00 },
	{ 0x0602, 0x01 },
	{ 0x0608, 0x10 },
	{ 0x0609, 0x1E },
	{ 0x060A, 0x0D },
	{ 0x060B, 0x0C },
	{ 0x060C, 0x01 },
	{ 0x060D, 0x3F },
	{ 0x060E, 0x14 },
	{ 0x060F, 0x28 },
	{ 0x0610, 0x09 },
	{ 0x0611, 0x08 },
	{ 0x0612, 0x01 },
	{ 0x0613, 0x3F },
	{ 0x0615, 0x00 },
	{ 0x0616, 0x00 },
	{ 0x0617, 0x00 },
	{ 0x0618, 0x00 },
	{ 0x0619, 0xC3 },
	{ 0x061A, 0x00 },
	{ 0x061B, 0x00 },
	{ 0x061C, 0x00 },
	{ 0x061D, 0x00 },
	{ 0x061E, 0x00 },
	{ 0x061F, 0x80 },
	{ 0x0621, 0x21 },
	{ 0x0622, 0x01 },
	{ 0x0623, 0x00 },
	{ 0x0624, 0x00 },
	{ 0x0625, 0x00 },
	{ 0x0626, 0x00 },
	{ 0x0627, 0x00 },
	{ 0x0628, 0x00 },
	{ 0x0629, 0x00 },
	{ 0x062A, 0x03 },
	{ 0x062B, 0x01 },
	{ 0x062C, 0x0F },
	{ 0x062D, 0x03 },
	{ 0x062E, 0x19 },
	{ 0x062F, 0x19 },
	{ 0x0631, 0x00 },
	{ 0x0632, 0x63 },
	{ 0x0633, 0x03 },
	{ 0x0634, 0x00 },
	{ 0x0635, 0x00 },
	{ 0x0636, 0x0C },
	{ 0x0637, 0x00 },
	{ 0x0638, 0x00 },
	{ 0x0639, 0x00 },
	{ 0x0642, 0x00 },
	{ 0x0643, 0x00 },
	{ 0x0644, 0x00 },
	{ 0x0645, 0x00 },
	{ 0x0702, 0x01 },
	{ 0x0709, 0x00 },
	{ 0x070A, 0x00 },
	{ 0x070B, 0x00 },
	{ 0x070C, 0x00 },
	{ 0x070D, 0x00 },
	{ 0x070E, 0x00 },
	{ 0x070F, 0x00 },
	{ 0x0710, 0x00 },
	{ 0x0711, 0x00 },
	{ 0x0712, 0x00 },
	{ 0x0713, 0x00 },
	{ 0x0714, 0x00 },
	{ 0x0716, 0x00 },
	{ 0x0717, 0x00 },
	{ 0x0718, 0x00 },
	{ 0x0719, 0x00 },
	{ 0x071A, 0x00 },
	{ 0x071B, 0x00 },
	{ 0x071C, 0x00 },
	{ 0x071D, 0x00 },
	{ 0x071E, 0x00 },
	{ 0x071F, 0x00 },
	{ 0x0720, 0x00 },
	{ 0x0722, 0x21 },
	{ 0x0723, 0x01 },
	{ 0x0724, 0x00 },
	{ 0x0725, 0x00 },
	{ 0x0726, 0x00 },
	{ 0x0727, 0x00 },
	{ 0x0728, 0x00 },
	{ 0x0729, 0x00 },
	{ 0x072A, 0x00 },
	{ 0x072B, 0x00 },
	{ 0x072C, 0x01 },
	{ 0x072D, 0x0F },
	{ 0x072E, 0x03 },
	{ 0x072F, 0x00 },
	{ 0x0730, 0x00 },
	{ 0x0732, 0x00 },
	{ 0x0733, 0x00 },
	{ 0x0734, 0x04 },
	{ 0x0735, 0x00 },
	{ 0x0736, 0x01 },
	{ 0x0737, 0x0C },
	{ 0x0738, 0x00 },
	{ 0x0739, 0x00 },
	{ 0x073A, 0x00 },
	{ 0x0743, 0x00 },
	{ 0x0744, 0x00 },
	{ 0x0745, 0x00 },
	{ 0x0746, 0x00 },
	{ 0x0802, 0x35 },
	{ 0x0803, 0x04 },
	{ 0x0804, 0x00 },
	{ 0x0805, 0x45 },
	{ 0x0806, 0x04 },
	{ 0x0807, 0x00 },
	{ 0x0808, 0x42 },
	{ 0x0809, 0x04 },
	{ 0x080A, 0x00 },
	{ 0x080B, 0x43 },
	{ 0x080C, 0x04 },
	{ 0x080D, 0x00 },
	{ 0x080E, 0x44 },
	{ 0x080F, 0x04 },
	{ 0x0810, 0x00 },
	{ 0x0811, 0x35 },
	{ 0x0812, 0x05 },
	{ 0x0813, 0x00 },
	{ 0x0814, 0x45 },
	{ 0x0815, 0x05 },
	{ 0x0816, 0x00 },
	{ 0x0817, 0x42 },
	{ 0x0818, 0x05 },
	{ 0x0819, 0x00 },
	{ 0x081A, 0x43 },
	{ 0x081B, 0x05 },
	{ 0x081C, 0x00 },
	{ 0x081D, 0x44 },
	{ 0x081E, 0x05 },
	{ 0x081F, 0x00 },
	{ 0x0820, 0x35 },
	{ 0x0821, 0x06 },
	{ 0x0822, 0x00 },
	{ 0x0823, 0x45 },
	{ 0x0824, 0x06 },
	{ 0x0825, 0x00 },
	{ 0x0826, 0x42 },
	{ 0x0827, 0x06 },
	{ 0x0828, 0x00 },
	{ 0x0829, 0x43 },
	{ 0x082A, 0x06 },
	{ 0x082B, 0x00 },
	{ 0x082C, 0x44 },
	{ 0x082D, 0x06 },
	{ 0x082E, 0x00 },
	{ 0x082F, 0x36 },
	{ 0x0830, 0x07 },
	{ 0x0831, 0x01 },
	{ 0x0832, 0x46 },
	{ 0x0833, 0x07 },
	{ 0x0834, 0x00 },
	{ 0x0835, 0x43 },
	{ 0x0836, 0x07 },
	{ 0x0837, 0x00 },
	{ 0x0838, 0x44 },
	{ 0x0839, 0x07 },
	{ 0x083A, 0x00 },
	{ 0x083B, 0x45 },
	{ 0x083C, 0x07 },
	{ 0x083D, 0x00 },
	{ 0x083E, 0x00 },
	{ 0x083F, 0x00 },
	{ 0x0840, 0x00 },
	{ 0x0841, 0x00 },
	{ 0x0842, 0x00 },
	{ 0x0843, 0x00 },
	{ 0x0844, 0x00 },
	{ 0x0845, 0x00 },
	{ 0x0846, 0x00 },
	{ 0x0847, 0x00 },
	{ 0x0848, 0x00 },
	{ 0x0849, 0x00 },
	{ 0x084A, 0x00 },
	{ 0x084B, 0x00 },
	{ 0x084C, 0x00 },
	{ 0x084D, 0x00 },
	{ 0x084E, 0x00 },
	{ 0x084F, 0x00 },
	{ 0x0850, 0x00 },
	{ 0x0851, 0x00 },
	{ 0x0852, 0x00 },
	{ 0x0853, 0x00 },
	{ 0x0854, 0x00 },
	{ 0x0855, 0x00 },
	{ 0x0856, 0x00 },
	{ 0x0857, 0x00 },
	{ 0x0858, 0x00 },
	{ 0x0859, 0x00 },
	{ 0x085A, 0x00 },
	{ 0x085B, 0x00 },
	{ 0x085C, 0x00 },
	{ 0x085D, 0x00 },
	{ 0x085E, 0x00 },
	{ 0x085F, 0x00 },
	{ 0x0860, 0x00 },
	{ 0x0861, 0x00 },
	{ 0x090E, 0x03 },
	{ 0x0943, 0x01 },
	{ 0x0949, 0x0F },
	{ 0x094A, 0x0F },
	{ 0x0A03, 0x0F },
	{ 0x0A04, 0x00 },
	{ 0x0A05, 0x0F },
	{ 0x0B44, 0x7F },
	{ 0x0B45, 0x00 },
	{ 0x0B46, 0x00 },
	{ 0x0B47, 0x00 },
	{ 0x0B48, 0x00 },
	{ 0x0B4A, 0x00 },
	{ 0x0414, 0x01 },
	{ 0x0514, 0x01 },
	{ 0x0614, 0x01 },
	{ 0x001C, 0x01 },
	{ 0x0B24, 0xDB },
	{ 0x0B25, 0x02 },

};

/*
 * Design Report
 *
 * Overview
 * ========
 * Part:         Si5347 Rev B
 * Project File: C:\work\des00\ptj_YSPLIT\doc\Si5347-5347EVB1_adc125_dac250_serdes125_run3.slabtimeproj
 * Design ID:    5347EVB1
 * Created By:   ClockBuilder Pro v2.9 [2016-07-29]
 * Timestamp:    2017-06-26 19:03:02 GMT+03:00
 * 
 * Design Rule Check
 * =================
 * Errors:
 * - No errors
 * 
 * Warnings:
 * - OUT2: For the best signal integrity, Silicon Labs strongly recommends selecting the lowest LVCMOS output impedance (31 ?) and then choosing the proper external source resistor to produce the best signal shape at the end of the signal trace
 * - Revision B is not recommended for new designs
 * - You have selected CMOS output. Please review AN862 "Optimizing Si534x Jitter Performance in Next Generation Internet Infrastructure Systems" to ensure your configuration meets your jitter requirements
 * 
 * Device Grade
 * ============
 * Maximum Output Frequency: 250 MHz
 * Frequency Synthesis Mode: Fractional
 * Frequency Plan Grade:     B
 * Minimum Base OPN:         Si5347B*
 * 
 * Device      Output Clock
 * Grade       Frequency Range       Typical Jitter
 * ---------   -------------------   --------------
 * Si5347A     100 Hz to 712.5 MHz   < 150 fs
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
 *    50 MHz (XO - External Oscillator)
 * 
 * Inputs:
 *     IN0: 125 MHz
 *          Standard
 *          DSPLL A
 *     IN1: 25 MHz
 *          Standard
 *          DSPLL B
 *     IN2: 125 MHz
 *          Standard
 *          DSPLL B,C
 *     IN3: 125 MHz
 *          Standard
 *          DSPLL C
 * 
 * Outputs:
 *    OUT0: 125 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL A
 *    OUT1: 125 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL B
 *    OUT2: 25 MHz
 *          Enabled, LVCMOS In-Phase 1.8 V 46 ?
 *          DSPLL C
 *    OUT3: 125 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL D (Free Run)
 *    OUT4: 125 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL B
 *    OUT5: 125 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL A
 *    OUT6: 250 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL A
 *    OUT7: 125 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL A
 * 
 * Frequency Plan
 * ==============
 * Fvco = 14.2 GHz [ 14 + 1/5 GHz ]
 * MXAXB = 284
 * 
 * DSPLL A:
 *    Fpfd = 1.9841269841269841... MHz [ 1 + 62/63 MHz ]
 *    Fdco = 1 GHz
 *    I/O Delay not enabled
 *    MA = 504
 *    N0 = 14.2 [ 14 + 1/5 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  28.603 Hz
 *      Coefficients:
 *         BW0:  15
 *         BW1:  28
 *         BW2:  14
 *         BW3:  13
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  916.539 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  1
 *         BW5:  63
 * DSPLL B:
 *    Fpfd = 1.9230769230769230... MHz [ 1 + 12/13 MHz ]
 *    Fdco = 750 MHz
 *    I/O Delay not enabled
 *    MB = 390
 *    N1 = 18.9333333333333333... [ 18 + 14/15 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  38.234 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  612.348 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  1
 *         BW5:  63
 * DSPLL C:
 *    Fpfd = 1.9230769230769230... MHz [ 1 + 12/13 MHz ]
 *    Fdco = 750 MHz
 *    I/O Delay not enabled
 *    MC = 390
 *    N2 = 18.9333333333333333... [ 18 + 14/15 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  38.234 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  1
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  612.348 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  1
 *         BW5:  63
 * DSPLL D:
 *    Free run only mode enabled
 *    Fdco = 750 MHz
 * 
 * P dividers:
 *    P0  = 63
 *    P1  = 13
 *    P2  = 65
 *    P3  = 65
 *    Pxaxb = 1
 * 
 * R dividers:
 *    R0 = 8
 *    R1 = 6
 *    R2 = 30
 *    R3 = 6
 *    R4 = 6
 *    R5 = 8
 *    R6 = 4
 *    R7 = 8
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
 * Revision B Frequency Offset Errata Report
 * =========================================
 * 
 * Output  Frequency  DSPLL  Offset(Max,ppt)
 * ------  ---------  -----  ---------------
 * OUT0    125 MHz    A      0.000000       
 * OUT1    125 MHz    B      0.000000       
 * OUT2    25 MHz     C      0.000000       
 * OUT3    125 MHz    D      N/A            
 * OUT4    125 MHz    B      0.000000       
 * OUT5    125 MHz    A      0.000000       
 * OUT6    250 MHz    A      0.000000       
 * OUT7    125 MHz    A      0.000000       
 * 
 * Offset is reported in parts-per-trillion (1e12).
 * 
 * Estimated Power & Junction Temperature
 * ======================================
 * Assumptions:
 * 
 * Revision: B
 * VDD:      1.8 V
 * Ta:       70 �C
 * Airflow:  None
 * 
 * Total Power: 1.138 W, On Chip Power: 1.096 W, Tj: 94 �C
 * 
 *         Frequency  Format              Voltage   Current     Power
 *         ---------  -----------------  --------  --------  --------
 * VDD                                      1.8 V  286.4 mA    515 mW
 * VDDA                                     3.3 V  120.4 mA    397 mW
 * VDDO0     125 MHz  LVDS                  1.8 V   15.7 mA     28 mW
 * VDDO1     125 MHz  LVDS                  1.8 V   15.7 mA     28 mW
 * VDDO2      25 MHz  LVCMOS (in-phase)     1.8 V   14.3 mA     26 mW
 * VDDO3     125 MHz  LVDS                  1.8 V   15.7 mA     28 mW
 * VDDO4     125 MHz  LVDS                  1.8 V   15.7 mA     28 mW
 * VDDO5     125 MHz  LVDS                  1.8 V   15.7 mA     28 mW
 * VDDO6     250 MHz  LVDS                  1.8 V   16.6 mA     30 mW
 * VDDO7     125 MHz  LVDS                  1.8 V   15.7 mA     28 mW
 *                                                 --------  --------
 *                                          Total  532.0 mA   1.138 W
 * 
 * Note:
 * 
 * -Total power includes on- and off-chip power. This is a typical value and estimate only.
 * -Use an EVB for a more exact power measurement
 * -On-chip power excludes power dissipated in external terminations.
 * -Tj is junction temperature. Tj must be less than 125 �C (on Si5347 Revision B) for device to comply with datasheet specifications.
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
 * 0x0019[3]     LOL_INTR_MSK_PLLD         1              0x1             
 * 0x0019[4]     HOLD_INTR_MSK_PLLA        0              0x0             
 * 0x0019[5]     HOLD_INTR_MSK_PLLB        0              0x0             
 * 0x0019[6]     HOLD_INTR_MSK_PLLC        0              0x0             
 * 0x0019[7]     HOLD_INTR_MSK_PLLD        1              0x1             
 * 0x001A[4]     CAL_INTR_MSK_PLLA         0              0x0             
 * 0x001A[5]     CAL_INTR_MSK_PLLB         0              0x0             
 * 0x001A[6]     CAL_INTR_MSK_PLLC         0              0x0             
 * 0x001A[7]     CAL_INTR_MSK_PLLD         1              0x1             
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
 * 0x002E[0:15]  LOS0_TRG_THR              58             0x003A          
 * 0x0030[0:15]  LOS1_TRG_THR              60             0x003C          
 * 0x0032[0:15]  LOS2_TRG_THR              60             0x003C          
 * 0x0034[0:15]  LOS3_TRG_THR              60             0x003C          
 * 0x0036[0:15]  LOS0_CLR_THR              58             0x003A          
 * 0x0038[0:15]  LOS1_CLR_THR              60             0x003C          
 * 0x003A[0:15]  LOS2_CLR_THR              60             0x003C          
 * 0x003C[0:15]  LOS3_CLR_THR              60             0x003C          
 * 0x003F[0:3]   OOF_EN                    15             0xF             
 * 0x003F[4:7]   FAST_OOF_EN               15             0xF             
 * 0x0040[0:2]   OOF_REF_SEL               4              0x4             
 * 0x0041[0:4]   OOF0_DIV_SEL              13             0x0D            
 * 0x0042[0:4]   OOF1_DIV_SEL              11             0x0B            
 * 0x0043[0:4]   OOF2_DIV_SEL              13             0x0D            
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
 * 0x005A[0:25]  OOF0_RATIO_REF            20971520       0x1400000       
 * 0x005E[0:25]  OOF1_RATIO_REF            16777216       0x1000000       
 * 0x0062[0:25]  OOF2_RATIO_REF            20971520       0x1400000       
 * 0x0066[0:25]  OOF3_RATIO_REF            20971520       0x1400000       
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
 * 0x009A[3]     LOL_SLOW_EN_PLLD          0              0x0             
 * 0x009B[0:3]   LOL_SLW_DETWIN_SEL_PLLA   3              0x3             
 * 0x009B[4:7]   LOL_SLW_DETWIN_SEL_PLLB   3              0x3             
 * 0x009C[0:3]   LOL_SLW_DETWIN_SEL_PLLC   3              0x3             
 * 0x009C[4:7]   LOL_SLW_DETWIN_SEL_PLLD   0              0x0             
 * 0x009D[0:1]   LOL_SLW_VALWIN_SEL_PLLA   0              0x0             
 * 0x009D[2:3]   LOL_SLW_VALWIN_SEL_PLLB   0              0x0             
 * 0x009D[4:5]   LOL_SLW_VALWIN_SEL_PLLC   0              0x0             
 * 0x009D[6:7]   LOL_SLW_VALWIN_SEL_PLLD   0              0x0             
 * 0x009E[0:3]   LOL_SLW_SET_THR_PLLA      2              0x2             
 * 0x009E[4:7]   LOL_SLW_SET_THR_PLLB      2              0x2             
 * 0x009F[0:3]   LOL_SLW_SET_THR_PLLC      2              0x2             
 * 0x009F[4:7]   LOL_SLW_SET_THR_PLLD      0              0x0             
 * 0x00A0[0:3]   LOL_SLW_CLR_THR_PLLA      0              0x0             
 * 0x00A0[4:7]   LOL_SLW_CLR_THR_PLLB      0              0x0             
 * 0x00A1[0:3]   LOL_SLW_CLR_THR_PLLC      0              0x0             
 * 0x00A1[4:7]   LOL_SLW_CLR_THR_PLLD      0              0x0             
 * 0x00A2[0]     LOL_TIMER_EN_PLLA         1              0x1             
 * 0x00A2[1]     LOL_TIMER_EN_PLLB         1              0x1             
 * 0x00A2[2]     LOL_TIMER_EN_PLLC         1              0x1             
 * 0x00A2[3]     LOL_TIMER_EN_PLLD         0              0x0             
 * 0x00A3[0:34]  LOL_CLR_DELAY_PLLA        1675402        0x00019908A     
 * 0x00A8[0:34]  LOL_CLR_DELAY_PLLB        1253360        0x000131FF0     
 * 0x00AD[0:34]  LOL_CLR_DELAY_PLLC        1253360        0x000131FF0     
 * 0x00B2[0:34]  LOL_CLR_DELAY_PLLD        0              0x000000000     
 * 0x0102[0]     OUTALL_DISABLE_LOW        1              0x1             
 * 0x0108[0]     OUT0_PDN                  0              0x0             
 * 0x0108[1]     OUT0_OE                   1              0x1             
 * 0x0108[2]     OUT0_RDIV_FORCE2          0              0x0             
 * 0x0109[0:2]   OUT0_FORMAT               1              0x1             
 * 0x0109[3]     OUT0_SYNC_EN              1              0x1             
 * 0x0109[4:5]   OUT0_DIS_STATE            0              0x0             
 * 0x0109[6:7]   OUT0_CMOS_DRV             0              0x0             
 * 0x010A[0:3]   OUT0_CM                   13             0xD             
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
 * 0x0114[0:3]   OUT1_CM                   13             0xD             
 * 0x0114[4:6]   OUT1_AMPL                 3              0x3             
 * 0x0115[0:2]   OUT1_MUX_SEL              1              0x1             
 * 0x0115[6:7]   OUT1_INV                  0              0x0             
 * 0x0116[0:2]   OUT1_DIS_SRC              2              0x2             
 * 0x0117[0]     OUT2_PDN                  0              0x0             
 * 0x0117[1]     OUT2_OE                   1              0x1             
 * 0x0117[2]     OUT2_RDIV_FORCE2          0              0x0             
 * 0x0118[0:2]   OUT2_FORMAT               4              0x4             
 * 0x0118[3]     OUT2_SYNC_EN              1              0x1             
 * 0x0118[4:5]   OUT2_DIS_STATE            0              0x0             
 * 0x0118[6:7]   OUT2_CMOS_DRV             2              0x2             
 * 0x0119[0:3]   OUT2_CM                   0              0x0             
 * 0x0119[4:6]   OUT2_AMPL                 0              0x0             
 * 0x011A[0:2]   OUT2_MUX_SEL              2              0x2             
 * 0x011A[6:7]   OUT2_INV                  0              0x0             
 * 0x011B[0:2]   OUT2_DIS_SRC              3              0x3             
 * 0x011C[0]     OUT3_PDN                  0              0x0             
 * 0x011C[1]     OUT3_OE                   1              0x1             
 * 0x011C[2]     OUT3_RDIV_FORCE2          0              0x0             
 * 0x011D[0:2]   OUT3_FORMAT               1              0x1             
 * 0x011D[3]     OUT3_SYNC_EN              1              0x1             
 * 0x011D[4:5]   OUT3_DIS_STATE            0              0x0             
 * 0x011D[6:7]   OUT3_CMOS_DRV             0              0x0             
 * 0x011E[0:3]   OUT3_CM                   13             0xD             
 * 0x011E[4:6]   OUT3_AMPL                 3              0x3             
 * 0x011F[0:2]   OUT3_MUX_SEL              3              0x3             
 * 0x011F[6:7]   OUT3_INV                  0              0x0             
 * 0x0120[0:2]   OUT3_DIS_SRC              4              0x4             
 * 0x0126[0]     OUT4_PDN                  0              0x0             
 * 0x0126[1]     OUT4_OE                   1              0x1             
 * 0x0126[2]     OUT4_RDIV_FORCE2          0              0x0             
 * 0x0127[0:2]   OUT4_FORMAT               1              0x1             
 * 0x0127[3]     OUT4_SYNC_EN              1              0x1             
 * 0x0127[4:5]   OUT4_DIS_STATE            0              0x0             
 * 0x0127[6:7]   OUT4_CMOS_DRV             0              0x0             
 * 0x0128[0:3]   OUT4_CM                   13             0xD             
 * 0x0128[4:6]   OUT4_AMPL                 3              0x3             
 * 0x0129[0:2]   OUT4_MUX_SEL              1              0x1             
 * 0x0129[6:7]   OUT4_INV                  0              0x0             
 * 0x012A[0:2]   OUT4_DIS_SRC              2              0x2             
 * 0x012B[0]     OUT5_PDN                  0              0x0             
 * 0x012B[1]     OUT5_OE                   1              0x1             
 * 0x012B[2]     OUT5_RDIV_FORCE2          0              0x0             
 * 0x012C[0:2]   OUT5_FORMAT               1              0x1             
 * 0x012C[3]     OUT5_SYNC_EN              1              0x1             
 * 0x012C[4:5]   OUT5_DIS_STATE            0              0x0             
 * 0x012C[6:7]   OUT5_CMOS_DRV             0              0x0             
 * 0x012D[0:3]   OUT5_CM                   13             0xD             
 * 0x012D[4:6]   OUT5_AMPL                 3              0x3             
 * 0x012E[0:2]   OUT5_MUX_SEL              0              0x0             
 * 0x012E[6:7]   OUT5_INV                  0              0x0             
 * 0x012F[0:2]   OUT5_DIS_SRC              1              0x1             
 * 0x0130[0]     OUT6_PDN                  0              0x0             
 * 0x0130[1]     OUT6_OE                   1              0x1             
 * 0x0130[2]     OUT6_RDIV_FORCE2          0              0x0             
 * 0x0131[0:2]   OUT6_FORMAT               1              0x1             
 * 0x0131[3]     OUT6_SYNC_EN              1              0x1             
 * 0x0131[4:5]   OUT6_DIS_STATE            0              0x0             
 * 0x0131[6:7]   OUT6_CMOS_DRV             0              0x0             
 * 0x0132[0:3]   OUT6_CM                   13             0xD             
 * 0x0132[4:6]   OUT6_AMPL                 3              0x3             
 * 0x0133[0:2]   OUT6_MUX_SEL              0              0x0             
 * 0x0133[6:7]   OUT6_INV                  0              0x0             
 * 0x0134[0:2]   OUT6_DIS_SRC              1              0x1             
 * 0x013A[0]     OUT7_PDN                  0              0x0             
 * 0x013A[1]     OUT7_OE                   1              0x1             
 * 0x013A[2]     OUT7_RDIV_FORCE2          0              0x0             
 * 0x013B[0:2]   OUT7_FORMAT               1              0x1             
 * 0x013B[3]     OUT7_SYNC_EN              1              0x1             
 * 0x013B[4:5]   OUT7_DIS_STATE            0              0x0             
 * 0x013B[6:7]   OUT7_CMOS_DRV             0              0x0             
 * 0x013C[0:3]   OUT7_CM                   13             0xD             
 * 0x013C[4:6]   OUT7_AMPL                 3              0x3             
 * 0x013D[0:2]   OUT7_MUX_SEL              0              0x0             
 * 0x013D[6:7]   OUT7_INV                  0              0x0             
 * 0x013E[0:2]   OUT7_DIS_SRC              1              0x1             
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
 * 0x0208[0:47]  P0_NUM                    63             0x00000000003F  
 * 0x020E[0:31]  P0_DEN                    1              0x00000001      
 * 0x0212[0:47]  P1_NUM                    13             0x00000000000D  
 * 0x0218[0:31]  P1_DEN                    1              0x00000001      
 * 0x021C[0:47]  P2_NUM                    65             0x000000000041  
 * 0x0222[0:31]  P2_DEN                    1              0x00000001      
 * 0x0226[0:47]  P3_NUM                    65             0x000000000041  
 * 0x022C[0:31]  P3_DEN                    1              0x00000001      
 * 0x0231[0:3]   P0_FRACN_MODE             1              0x1             
 * 0x0231[4]     P0_FRACN_EN               0              0x0             
 * 0x0232[0:3]   P1_FRACN_MODE             1              0x1             
 * 0x0232[4]     P1_FRACN_EN               0              0x0             
 * 0x0233[0:3]   P2_FRACN_MODE             1              0x1             
 * 0x0233[4]     P2_FRACN_EN               0              0x0             
 * 0x0234[0:3]   P3_FRACN_MODE             1              0x1             
 * 0x0234[4]     P3_FRACN_EN               0              0x0             
 * 0x0235[0:43]  MXAXB_NUM                 609885356032   0x08E00000000   
 * 0x023B[0:31]  MXAXB_DEN                 2147483648     0x80000000      
 * 0x0240[0]     MXAXB_FSTEP_MSK           0              0x0             
 * 0x0240[1]     MXAXB_FSTEP_DEN           0              0x0             
 * 0x0241[0:43]  MXAXB_FSTEPW              0              0x00000000000   
 * 0x024A[0:23]  R0_REG                    3              0x000003        
 * 0x0250[0:23]  R1_REG                    2              0x000002        
 * 0x0253[0:23]  R2_REG                    14             0x00000E        
 * 0x0256[0:23]  R3_REG                    2              0x000002        
 * 0x025C[0:23]  R4_REG                    2              0x000002        
 * 0x025F[0:23]  R5_REG                    3              0x000003        
 * 0x0262[0:23]  R6_REG                    1              0x000001        
 * 0x0268[0:23]  R7_REG                    3              0x000003        
 * 0x026B[0:7]   DESIGN_ID0                53             0x35            
 * 0x026C[0:7]   DESIGN_ID1                51             0x33            
 * 0x026D[0:7]   DESIGN_ID2                52             0x34            
 * 0x026E[0:7]   DESIGN_ID3                55             0x37            
 * 0x026F[0:7]   DESIGN_ID4                69             0x45            
 * 0x0270[0:7]   DESIGN_ID5                86             0x56            
 * 0x0271[0:7]   DESIGN_ID6                66             0x42            
 * 0x0272[0:7]   DESIGN_ID7                49             0x31            
 * 0x0302[0:43]  N0_NUM                    38117834752    0x008E0000000   
 * 0x0308[0:31]  N0_DEN                    2684354560     0xA0000000      
 * 0x030C[0]     N0_UPDATE                 0              0x0             
 * 0x030D[0:43]  N1_NUM                    76235669504    0x011C0000000   
 * 0x0313[0:31]  N1_DEN                    4026531840     0xF0000000      
 * 0x0317[0]     N1_UPDATE                 0              0x0             
 * 0x0318[0:43]  N2_NUM                    76235669504    0x011C0000000   
 * 0x031E[0:31]  N2_DEN                    4026531840     0xF0000000      
 * 0x0322[0]     N2_UPDATE                 0              0x0             
 * 0x0323[0:43]  N3_NUM                    76235669504    0x011C0000000   
 * 0x0329[0:31]  N3_DEN                    4026531840     0xF0000000      
 * 0x032D[0]     N3_UPDATE                 0              0x0             
 * 0x0338[1]     N_UPDATE                  0              0x0             
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
 * 0x0408[0:5]   BW0_PLLA                  15             0x0F            
 * 0x0409[0:5]   BW1_PLLA                  28             0x1C            
 * 0x040A[0:5]   BW2_PLLA                  14             0x0E            
 * 0x040B[0:5]   BW3_PLLA                  13             0x0D            
 * 0x040C[0:5]   BW4_PLLA                  1              0x01            
 * 0x040D[0:5]   BW5_PLLA                  63             0x3F            
 * 0x040E[0:5]   FAST_BW0_PLLA             20             0x14            
 * 0x040F[0:5]   FAST_BW1_PLLA             40             0x28            
 * 0x0410[0:5]   FAST_BW2_PLLA             9              0x09            
 * 0x0411[0:5]   FAST_BW3_PLLA             8              0x08            
 * 0x0412[0:5]   FAST_BW4_PLLA             1              0x01            
 * 0x0413[0:5]   FAST_BW5_PLLA             63             0x3F            
 * 0x0415[0:55]  M_NUM_PLLA                1082331758592  0x0000FC00000000
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
 * 0x0432[0:23]  HOLD_15M_CYC_COUNT_PLLA   840            0x000348        
 * 0x0435[0]     FORCE_HOLD_PLLA           0              0x0             
 * 0x0436[0:1]   CLK_SWITCH_MODE_PLLA      0              0x0             
 * 0x0436[2]     HSW_EN_PLLA               1              0x1             
 * 0x0436[3]     HSW_RAMP_BYP_PLLA         1              0x1             
 * 0x0437[0:3]   IN_LOS_MSK_PLLA           0              0x0             
 * 0x0437[4:7]   IN_OOF_MSK_PLLA           0              0x0             
 * 0x0438[0:2]   IN0_PRIORITY_PLLA         0              0x0             
 * 0x0438[4:6]   IN1_PRIORITY_PLLA         0              0x0             
 * 0x0439[0:2]   IN2_PRIORITY_PLLA         0              0x0             
 * 0x0439[4:6]   IN3_PRIORITY_PLLA         0              0x0             
 * 0x0442[0:17]  SLAB_OLA_FINE_ADJ_OVR     0              0x00000         
 * 0x0445[1]     SLAB_OLA_FORCE_FINE_ADJ   0              0x0             
 * 0x0502[4]     ADD_DIV256_PLLB           0              0x0             
 * 0x0508[0:5]   BW0_PLLB                  16             0x10            
 * 0x0509[0:5]   BW1_PLLB                  30             0x1E            
 * 0x050A[0:5]   BW2_PLLB                  13             0x0D            
 * 0x050B[0:5]   BW3_PLLB                  12             0x0C            
 * 0x050C[0:5]   BW4_PLLB                  1              0x01            
 * 0x050D[0:5]   BW5_PLLB                  63             0x3F            
 * 0x050E[0:5]   FAST_BW0_PLLB             20             0x14            
 * 0x050F[0:5]   FAST_BW1_PLLB             40             0x28            
 * 0x0510[0:5]   FAST_BW2_PLLB             9              0x09            
 * 0x0511[0:5]   FAST_BW3_PLLB             8              0x08            
 * 0x0512[0:5]   FAST_BW4_PLLB             1              0x01            
 * 0x0513[0:5]   FAST_BW5_PLLB             63             0x3F            
 * 0x0515[0:55]  M_NUM_PLLB                837518622720   0x0000C300000000
 * 0x051C[0:31]  M_DEN_PLLB                2147483648     0x80000000      
 * 0x0521[0:3]   M_FRAC_MODE_PLLB          1              0x1             
 * 0x0521[4]     M_FRAC_EN_PLLB            0              0x0             
 * 0x0522[0]     M_FSTEP_MSK_PLLB          1              0x1             
 * 0x0522[1]     M_FSTEPW_DEN_PLLB         0              0x0             
 * 0x0523[0:55]  M_FSTEPW_PLLB             0              0x00000000000000
 * 0x052A[0]     IN_SEL_REGCTRL_PLLB       1              0x1             
 * 0x052A[1:3]   IN_SEL_PLLB               2              0x2             
 * 0x052B[0]     FASTLOCK_AUTO_EN_PLLB     1              0x1             
 * 0x052B[1]     FASTLOCK_MAN_PLLB         0              0x0             
 * 0x052C[0]     HOLD_EN_PLLB              1              0x1             
 * 0x052C[3]     HOLD_RAMP_BYP_PLLB        1              0x1             
 * 0x052C[5:7]   HOLD_RAMP_RATE_PLLB       0              0x0             
 * 0x052D[1]     HOLD_RAMPBYP_NOHIST_PLLB  1              0x1             
 * 0x052E[0:4]   HOLD_HIST_LEN_PLLB        25             0x19            
 * 0x052F[0:4]   HOLD_HIST_DELAY_PLLB      25             0x19            
 * 0x0531[0:4]   HOLD_REF_COUNT_FRC_PLLB   0              0x00            
 * 0x0532[0:23]  HOLD_15M_CYC_COUNT_PLLB   867            0x000363        
 * 0x0535[0]     FORCE_HOLD_PLLB           0              0x0             
 * 0x0536[0:1]   CLK_SWITCH_MODE_PLLB      0              0x0             
 * 0x0536[2]     HSW_EN_PLLB               1              0x1             
 * 0x0536[3]     HSW_RAMP_BYP_PLLB         1              0x1             
 * 0x0537[0:3]   IN_LOS_MSK_PLLB           0              0x0             
 * 0x0537[4:7]   IN_OOF_MSK_PLLB           0              0x0             
 * 0x0538[0:2]   IN0_PRIORITY_PLLB         0              0x0             
 * 0x0538[4:6]   IN1_PRIORITY_PLLB         0              0x0             
 * 0x0539[0:2]   IN2_PRIORITY_PLLB         0              0x0             
 * 0x0539[4:6]   IN3_PRIORITY_PLLB         0              0x0             
 * 0x0542[0:17]  SLAB_OLB_FINE_ADJ_OVR     0              0x00000         
 * 0x0545[1]     SLAB_OLB_FORCE_FINE_ADJ   0              0x0             
 * 0x0602[4]     ADD_DIV256_PLLC           0              0x0             
 * 0x0608[0:5]   BW0_PLLC                  16             0x10            
 * 0x0609[0:5]   BW1_PLLC                  30             0x1E            
 * 0x060A[0:5]   BW2_PLLC                  13             0x0D            
 * 0x060B[0:5]   BW3_PLLC                  12             0x0C            
 * 0x060C[0:5]   BW4_PLLC                  1              0x01            
 * 0x060D[0:5]   BW5_PLLC                  63             0x3F            
 * 0x060E[0:5]   FAST_BW0_PLLC             20             0x14            
 * 0x060F[0:5]   FAST_BW1_PLLC             40             0x28            
 * 0x0610[0:5]   FAST_BW2_PLLC             9              0x09            
 * 0x0611[0:5]   FAST_BW3_PLLC             8              0x08            
 * 0x0612[0:5]   FAST_BW4_PLLC             1              0x01            
 * 0x0613[0:5]   FAST_BW5_PLLC             63             0x3F            
 * 0x0615[0:55]  M_NUM_PLLC                837518622720   0x0000C300000000
 * 0x061C[0:31]  M_DEN_PLLC                2147483648     0x80000000      
 * 0x0621[0:3]   M_FRAC_MODE_PLLC          1              0x1             
 * 0x0621[4]     M_FRAC_EN_PLLC            0              0x0             
 * 0x0622[0]     M_FSTEP_MSK_PLLC          1              0x1             
 * 0x0622[1]     M_FSTEPW_DEN_PLLC         0              0x0             
 * 0x0623[0:55]  M_FSTEPW_PLLC             0              0x00000000000000
 * 0x062A[0:2]   IN_SEL_PLLC               3              0x3             
 * 0x062B[0]     FASTLOCK_AUTO_EN_PLLC     1              0x1             
 * 0x062B[1]     FASTLOCK_MAN_PLLC         0              0x0             
 * 0x062C[0]     HOLD_EN_PLLC              1              0x1             
 * 0x062C[3]     HOLD_RAMP_BYP_PLLC        1              0x1             
 * 0x062C[5:7]   HOLD_RAMP_RATE_PLLC       0              0x0             
 * 0x062D[1]     HOLD_RAMPBYP_NOHIST_PLLC  1              0x1             
 * 0x062E[0:4]   HOLD_HIST_LEN_PLLC        25             0x19            
 * 0x062F[0:4]   HOLD_HIST_DELAY_PLLC      25             0x19            
 * 0x0631[0:4]   HOLD_REF_COUNT_FRC_PLLC   0              0x00            
 * 0x0632[0:23]  HOLD_15M_CYC_COUNT_PLLC   867            0x000363        
 * 0x0635[0]     FORCE_HOLD_PLLC           0              0x0             
 * 0x0636[0:1]   CLK_SWITCH_MODE_PLLC      0              0x0             
 * 0x0636[2]     HSW_EN_PLLC               1              0x1             
 * 0x0636[3]     HSW_RAMP_BYP_PLLC         1              0x1             
 * 0x0637[0:3]   IN_LOS_MSK_PLLC           0              0x0             
 * 0x0637[4:7]   IN_OOF_MSK_PLLC           0              0x0             
 * 0x0638[0:2]   IN0_PRIORITY_PLLC         0              0x0             
 * 0x0638[4:6]   IN1_PRIORITY_PLLC         0              0x0             
 * 0x0639[0:2]   IN2_PRIORITY_PLLC         0              0x0             
 * 0x0639[4:6]   IN3_PRIORITY_PLLC         0              0x0             
 * 0x0642[0:17]  SLAB_OLC_FINE_ADJ_OVR     0              0x00000         
 * 0x0645[1]     SLAB_OLC_FORCE_FINE_ADJ   0              0x0             
 * 0x0702[4]     ADD_DIV256_PLLD           0              0x0             
 * 0x0709[0:5]   BW0_PLLD                  0              0x00            
 * 0x070A[0:5]   BW1_PLLD                  0              0x00            
 * 0x070B[0:5]   BW2_PLLD                  0              0x00            
 * 0x070C[0:5]   BW3_PLLD                  0              0x00            
 * 0x070D[0:5]   BW4_PLLD                  0              0x00            
 * 0x070E[0:5]   BW5_PLLD                  0              0x00            
 * 0x070F[0:5]   FAST_BW0_PLLD             0              0x00            
 * 0x0710[0:5]   FAST_BW1_PLLD             0              0x00            
 * 0x0711[0:5]   FAST_BW2_PLLD             0              0x00            
 * 0x0712[0:5]   FAST_BW3_PLLD             0              0x00            
 * 0x0713[0:5]   FAST_BW4_PLLD             0              0x00            
 * 0x0714[0:5]   FAST_BW5_PLLD             0              0x00            
 * 0x0716[0:55]  M_NUM_PLLD                0              0x00000000000000
 * 0x071D[0:31]  M_DEN_PLLD                0              0x00000000      
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
 * 0x072F[0:4]   HOLD_HIST_LEN_PLLD        0              0x00            
 * 0x0730[0:4]   HOLD_HIST_DELAY_PLLD      0              0x00            
 * 0x0732[0:4]   HOLD_REF_COUNT_FRC_PLLD   0              0x00            
 * 0x0733[0:23]  HOLD_15M_CYC_COUNT_PLLD   1024           0x000400        
 * 0x0736[0]     FORCE_HOLD_PLLD           1              0x1             
 * 0x0737[0:1]   CLK_SWITCH_MODE_PLLD      0              0x0             
 * 0x0737[2]     HSW_EN_PLLD               1              0x1             
 * 0x0737[3]     HSW_RAMP_BYP_PLLD         1              0x1             
 * 0x0738[0:3]   IN_LOS_MSK_PLLD           0              0x0             
 * 0x0738[4:7]   IN_OOF_MSK_PLLD           0              0x0             
 * 0x0739[0:2]   IN0_PRIORITY_PLLD         0              0x0             
 * 0x0739[4:6]   IN1_PRIORITY_PLLD         0              0x0             
 * 0x073A[0:2]   IN2_PRIORITY_PLLD         0              0x0             
 * 0x073A[4:6]   IN3_PRIORITY_PLLD         0              0x0             
 * 0x0743[0:17]  SLAB_OLD_FINE_ADJ_OVR     0              0x00000         
 * 0x0746[1]     SLAB_OLD_FORCE_FINE_ADJ   0              0x0             
 * 0x0802[0:15]  FIXREGSA0                 1077           0x0435          
 * 0x0804[0:7]   FIXREGSD0                 0              0x00            
 * 0x0805[0:15]  FIXREGSA1                 1093           0x0445          
 * 0x0807[0:7]   FIXREGSD1                 0              0x00            
 * 0x0808[0:15]  FIXREGSA2                 1090           0x0442          
 * 0x080A[0:7]   FIXREGSD2                 0              0x00            
 * 0x080B[0:15]  FIXREGSA3                 1091           0x0443          
 * 0x080D[0:7]   FIXREGSD3                 0              0x00            
 * 0x080E[0:15]  FIXREGSA4                 1092           0x0444          
 * 0x0810[0:7]   FIXREGSD4                 0              0x00            
 * 0x0811[0:15]  FIXREGSA5                 1333           0x0535          
 * 0x0813[0:7]   FIXREGSD5                 0              0x00            
 * 0x0814[0:15]  FIXREGSA6                 1349           0x0545          
 * 0x0816[0:7]   FIXREGSD6                 0              0x00            
 * 0x0817[0:15]  FIXREGSA7                 1346           0x0542          
 * 0x0819[0:7]   FIXREGSD7                 0              0x00            
 * 0x081A[0:15]  FIXREGSA8                 1347           0x0543          
 * 0x081C[0:7]   FIXREGSD8                 0              0x00            
 * 0x081D[0:15]  FIXREGSA9                 1348           0x0544          
 * 0x081F[0:7]   FIXREGSD9                 0              0x00            
 * 0x0820[0:15]  FIXREGSA10                1589           0x0635          
 * 0x0822[0:7]   FIXREGSD10                0              0x00            
 * 0x0823[0:15]  FIXREGSA11                1605           0x0645          
 * 0x0825[0:7]   FIXREGSD11                0              0x00            
 * 0x0826[0:15]  FIXREGSA12                1602           0x0642          
 * 0x0828[0:7]   FIXREGSD12                0              0x00            
 * 0x0829[0:15]  FIXREGSA13                1603           0x0643          
 * 0x082B[0:7]   FIXREGSD13                0              0x00            
 * 0x082C[0:15]  FIXREGSA14                1604           0x0644          
 * 0x082E[0:7]   FIXREGSD14                0              0x00            
 * 0x082F[0:15]  FIXREGSA15                1846           0x0736          
 * 0x0831[0:7]   FIXREGSD15                1              0x01            
 * 0x0832[0:15]  FIXREGSA16                1862           0x0746          
 * 0x0834[0:7]   FIXREGSD16                0              0x00            
 * 0x0835[0:15]  FIXREGSA17                1859           0x0743          
 * 0x0837[0:7]   FIXREGSD17                0              0x00            
 * 0x0838[0:15]  FIXREGSA18                1860           0x0744          
 * 0x083A[0:7]   FIXREGSD18                0              0x00            
 * 0x083B[0:15]  FIXREGSA19                1861           0x0745          
 * 0x083D[0:7]   FIXREGSD19                0              0x00            
 * 0x083E[0:15]  FIXREGSA20                0              0x0000          
 * 0x0840[0:7]   FIXREGSD20                0              0x00            
 * 0x0841[0:15]  FIXREGSA21                0              0x0000          
 * 0x0843[0:7]   FIXREGSD21                0              0x00            
 * 0x0844[0:15]  FIXREGSA22                0              0x0000          
 * 0x0846[0:7]   FIXREGSD22                0              0x00            
 * 0x0847[0:15]  FIXREGSA23                0              0x0000          
 * 0x0849[0:7]   FIXREGSD23                0              0x00            
 * 0x084A[0:15]  FIXREGSA24                0              0x0000          
 * 0x084C[0:7]   FIXREGSD24                0              0x00            
 * 0x084D[0:15]  FIXREGSA25                0              0x0000          
 * 0x084F[0:7]   FIXREGSD25                0              0x00            
 * 0x0850[0:15]  FIXREGSA26                0              0x0000          
 * 0x0852[0:7]   FIXREGSD26                0              0x00            
 * 0x0853[0:15]  FIXREGSA27                0              0x0000          
 * 0x0855[0:7]   FIXREGSD27                0              0x00            
 * 0x0856[0:15]  FIXREGSA28                0              0x0000          
 * 0x0858[0:7]   FIXREGSD28                0              0x00            
 * 0x0859[0:15]  FIXREGSA29                0              0x0000          
 * 0x085B[0:7]   FIXREGSD29                0              0x00            
 * 0x085C[0:15]  FIXREGSA30                0              0x0000          
 * 0x085E[0:7]   FIXREGSD30                0              0x00            
 * 0x085F[0:15]  FIXREGSA31                0              0x0000          
 * 0x0861[0:7]   FIXREGSD31                0              0x00            
 * 0x090E[0]     XAXB_EXTCLK_EN            1              0x1             
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
 * 0x0B44[7]     FRACN_CLK_DIS_PLLD        0              0x0             
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