#include "si5347_config.h"

si5347ab_revb_register_t const si5347ab_revb_registers[SI5347AB_REVB_REG_CONFIG_NUM_REGS] =
{
	{ 0x0B24, 0xD8 },
	{ 0x0B25, 0x00 },
	{ 0x000B, 0x6C },
	{ 0x0016, 0x0F },
	{ 0x0017, 0x1C },
	{ 0x0018, 0x00 },
	{ 0x0019, 0x00 },
	{ 0x001A, 0x0F },
	{ 0x0020, 0x01 },
	{ 0x002B, 0x02 },
	{ 0x002C, 0x0F },
	{ 0x002D, 0x55 },
	{ 0x002E, 0x45 },
	{ 0x002F, 0x00 },
	{ 0x0030, 0x45 },
	{ 0x0031, 0x00 },
	{ 0x0032, 0x45 },
	{ 0x0033, 0x00 },
	{ 0x0034, 0x45 },
	{ 0x0035, 0x00 },
	{ 0x0036, 0x45 },
	{ 0x0037, 0x00 },
	{ 0x0038, 0x45 },
	{ 0x0039, 0x00 },
	{ 0x003A, 0x45 },
	{ 0x003B, 0x00 },
	{ 0x003C, 0x45 },
	{ 0x003D, 0x00 },
	{ 0x003F, 0xFF },
	{ 0x0040, 0x04 },
	{ 0x0041, 0x0E },
	{ 0x0042, 0x0D },
	{ 0x0043, 0x0E },
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
	{ 0x005A, 0xCC },
	{ 0x005B, 0xCC },
	{ 0x005C, 0xCC },
	{ 0x005D, 0x00 },
	{ 0x005E, 0x00 },
	{ 0x005F, 0x00 },
	{ 0x0060, 0x40 },
	{ 0x0061, 0x01 },
	{ 0x0062, 0x00 },
	{ 0x0063, 0x00 },
	{ 0x0064, 0x00 },
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
	{ 0x009A, 0x0F },
	{ 0x009B, 0x43 },
	{ 0x009C, 0x34 },
	{ 0x009D, 0x00 },
	{ 0x009E, 0x22 },
	{ 0x009F, 0x22 },
	{ 0x00A0, 0x00 },
	{ 0x00A1, 0x00 },
	{ 0x00A2, 0x0F },
	{ 0x00A3, 0x57 },
	{ 0x00A4, 0xD6 },
	{ 0x00A5, 0x10 },
	{ 0x00A6, 0x00 },
	{ 0x00A7, 0x00 },
	{ 0x00A8, 0xDC },
	{ 0x00A9, 0x91 },
	{ 0x00AA, 0x12 },
	{ 0x00AB, 0x00 },
	{ 0x00AC, 0x00 },
	{ 0x00AD, 0xDC },
	{ 0x00AE, 0x91 },
	{ 0x00AF, 0x12 },
	{ 0x00B0, 0x00 },
	{ 0x00B1, 0x00 },
	{ 0x00B2, 0xC2 },
	{ 0x00B3, 0x4B },
	{ 0x00B4, 0x19 },
	{ 0x00B5, 0x00 },
	{ 0x00B6, 0x00 },
	{ 0x0102, 0x01 },
	{ 0x0108, 0x02 },
	{ 0x0109, 0x09 },
	{ 0x010A, 0x3B },
	{ 0x010B, 0x02 },
	{ 0x010C, 0x03 },
	{ 0x0112, 0x02 },
	{ 0x0113, 0x09 },
	{ 0x0114, 0x3B },
	{ 0x0115, 0x01 },
	{ 0x0116, 0x02 },
	{ 0x0117, 0x02 },
	{ 0x0118, 0x09 },
	{ 0x0119, 0x3B },
	{ 0x011A, 0x00 },
	{ 0x011B, 0x01 },
	{ 0x011C, 0x02 },
	{ 0x011D, 0x09 },
	{ 0x011E, 0x3B },
	{ 0x011F, 0x01 },
	{ 0x0120, 0x02 },
	{ 0x0126, 0x02 },
	{ 0x0127, 0x09 },
	{ 0x0128, 0x3B },
	{ 0x0129, 0x03 },
	{ 0x012A, 0x04 },
	{ 0x012B, 0x02 },
	{ 0x012C, 0x09 },
	{ 0x012D, 0x3B },
	{ 0x012E, 0x00 },
	{ 0x012F, 0x01 },
	{ 0x0130, 0x02 },
	{ 0x0131, 0x09 },
	{ 0x0132, 0x3B },
	{ 0x0133, 0x00 },
	{ 0x0134, 0x01 },
	{ 0x013A, 0x01 },
	{ 0x013B, 0x09 },
	{ 0x013C, 0x3B },
	{ 0x013D, 0x00 },
	{ 0x013E, 0x00 },
	{ 0x013F, 0x00 },
	{ 0x0140, 0x00 },
	{ 0x0141, 0x40 },
	{ 0x0142, 0xFF },
	{ 0x0202, 0x00 },
	{ 0x0203, 0x00 },
	{ 0x0204, 0x00 },
	{ 0x0205, 0x00 },
	{ 0x0206, 0x00 },
	{ 0x0208, 0x60 },
	{ 0x0209, 0x00 },
	{ 0x020A, 0x00 },
	{ 0x020B, 0x00 },
	{ 0x020C, 0x00 },
	{ 0x020D, 0x00 },
	{ 0x020E, 0x01 },
	{ 0x020F, 0x00 },
	{ 0x0210, 0x00 },
	{ 0x0211, 0x00 },
	{ 0x0212, 0x4B },
	{ 0x0213, 0x00 },
	{ 0x0214, 0x00 },
	{ 0x0215, 0x00 },
	{ 0x0216, 0x00 },
	{ 0x0217, 0x00 },
	{ 0x0218, 0x01 },
	{ 0x0219, 0x00 },
	{ 0x021A, 0x00 },
	{ 0x021B, 0x00 },
	{ 0x021C, 0x78 },
	{ 0x021D, 0x00 },
	{ 0x021E, 0x00 },
	{ 0x021F, 0x00 },
	{ 0x0220, 0x00 },
	{ 0x0221, 0x00 },
	{ 0x0222, 0x01 },
	{ 0x0223, 0x00 },
	{ 0x0224, 0x00 },
	{ 0x0225, 0x00 },
	{ 0x0226, 0x4B },
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
	{ 0x024A, 0x02 },
	{ 0x024B, 0x00 },
	{ 0x024C, 0x00 },
	{ 0x0250, 0x02 },
	{ 0x0251, 0x00 },
	{ 0x0252, 0x00 },
	{ 0x0253, 0x02 },
	{ 0x0254, 0x00 },
	{ 0x0255, 0x00 },
	{ 0x0256, 0x02 },
	{ 0x0257, 0x00 },
	{ 0x0258, 0x00 },
	{ 0x025C, 0x02 },
	{ 0x025D, 0x00 },
	{ 0x025E, 0x00 },
	{ 0x025F, 0x02 },
	{ 0x0260, 0x00 },
	{ 0x0261, 0x00 },
	{ 0x0262, 0x02 },
	{ 0x0263, 0x00 },
	{ 0x0264, 0x00 },
	{ 0x0268, 0x00 },
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
	{ 0x0305, 0x18 },
	{ 0x0306, 0x0B },
	{ 0x0307, 0x00 },
	{ 0x0308, 0x00 },
	{ 0x0309, 0x00 },
	{ 0x030A, 0x00 },
	{ 0x030B, 0xC0 },
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
	{ 0x0323, 0x00 },
	{ 0x0324, 0x00 },
	{ 0x0325, 0x00 },
	{ 0x0326, 0xE0 },
	{ 0x0327, 0x08 },
	{ 0x0328, 0x00 },
	{ 0x0329, 0x00 },
	{ 0x032A, 0x00 },
	{ 0x032B, 0x00 },
	{ 0x032C, 0xC0 },
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
	{ 0x0408, 0x10 },
	{ 0x0409, 0x1E },
	{ 0x040A, 0x0D },
	{ 0x040B, 0x0C },
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
	{ 0x0419, 0x20 },
	{ 0x041A, 0x01 },
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
	{ 0x0432, 0xE8 },
	{ 0x0433, 0x03 },
	{ 0x0434, 0x00 },
	{ 0x0436, 0x0C },
	{ 0x0437, 0x00 },
	{ 0x0438, 0x01 },
	{ 0x0439, 0x00 },
	{ 0x0502, 0x01 },
	{ 0x0508, 0x10 },
	{ 0x0509, 0x1E },
	{ 0x050A, 0x0E },
	{ 0x050B, 0x0D },
	{ 0x050C, 0x01 },
	{ 0x050D, 0x3F },
	{ 0x050E, 0x15 },
	{ 0x050F, 0x2A },
	{ 0x0510, 0x09 },
	{ 0x0511, 0x08 },
	{ 0x0512, 0x01 },
	{ 0x0513, 0x3F },
	{ 0x0515, 0x00 },
	{ 0x0516, 0x00 },
	{ 0x0517, 0x00 },
	{ 0x0518, 0x00 },
	{ 0x0519, 0xE1 },
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
	{ 0x052A, 0x01 },
	{ 0x052B, 0x01 },
	{ 0x052C, 0x0F },
	{ 0x052D, 0x03 },
	{ 0x052E, 0x19 },
	{ 0x052F, 0x19 },
	{ 0x0531, 0x00 },
	{ 0x0532, 0xE8 },
	{ 0x0533, 0x03 },
	{ 0x0534, 0x00 },
	{ 0x0536, 0x0C },
	{ 0x0537, 0x00 },
	{ 0x0538, 0x21 },
	{ 0x0539, 0x03 },
	{ 0x0602, 0x01 },
	{ 0x0608, 0x10 },
	{ 0x0609, 0x1E },
	{ 0x060A, 0x0E },
	{ 0x060B, 0x0D },
	{ 0x060C, 0x01 },
	{ 0x060D, 0x3F },
	{ 0x060E, 0x15 },
	{ 0x060F, 0x2A },
	{ 0x0610, 0x09 },
	{ 0x0611, 0x08 },
	{ 0x0612, 0x01 },
	{ 0x0613, 0x3F },
	{ 0x0615, 0x00 },
	{ 0x0616, 0x00 },
	{ 0x0617, 0x00 },
	{ 0x0618, 0x00 },
	{ 0x0619, 0xE1 },
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
	{ 0x062A, 0x00 },
	{ 0x062B, 0x01 },
	{ 0x062C, 0x0F },
	{ 0x062D, 0x03 },
	{ 0x062E, 0x19 },
	{ 0x062F, 0x19 },
	{ 0x0631, 0x00 },
	{ 0x0632, 0xE8 },
	{ 0x0633, 0x03 },
	{ 0x0634, 0x00 },
	{ 0x0636, 0x0C },
	{ 0x0637, 0x00 },
	{ 0x0638, 0x01 },
	{ 0x0639, 0x40 },
	{ 0x0702, 0x01 },
	{ 0x0709, 0x0F },
	{ 0x070A, 0x1C },
	{ 0x070B, 0x0E },
	{ 0x070C, 0x0D },
	{ 0x070D, 0x01 },
	{ 0x070E, 0x3F },
	{ 0x070F, 0x14 },
	{ 0x0710, 0x28 },
	{ 0x0711, 0x09 },
	{ 0x0712, 0x08 },
	{ 0x0713, 0x01 },
	{ 0x0714, 0x3F },
	{ 0x0716, 0x00 },
	{ 0x0717, 0x00 },
	{ 0x0718, 0x00 },
	{ 0x0719, 0x00 },
	{ 0x071A, 0x68 },
	{ 0x071B, 0x01 },
	{ 0x071C, 0x00 },
	{ 0x071D, 0x00 },
	{ 0x071E, 0x00 },
	{ 0x071F, 0x00 },
	{ 0x0720, 0x80 },
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
	{ 0x072F, 0x19 },
	{ 0x0730, 0x19 },
	{ 0x0732, 0x00 },
	{ 0x0733, 0xE8 },
	{ 0x0734, 0x03 },
	{ 0x0735, 0x00 },
	{ 0x0737, 0x0C },
	{ 0x0738, 0x00 },
	{ 0x0739, 0x21 },
	{ 0x073A, 0x00 },
	{ 0x090E, 0x02 },
	{ 0x0943, 0x01 },
	{ 0x0949, 0x0F },
	{ 0x094A, 0x0F },
	{ 0x0A03, 0x0F },
	{ 0x0A04, 0x00 },
	{ 0x0A05, 0x0F },
	{ 0x0B44, 0xFF },
	{ 0x0B45, 0x00 },
	{ 0x0B46, 0x00 },
	{ 0x0B47, 0x00 },
	{ 0x0B48, 0x00 },
	{ 0x0B4A, 0x00 },
	{ 0x0414, 0x01 },
	{ 0x0514, 0x01 },
	{ 0x0614, 0x01 },
	{ 0x0715, 0x01 },
	{ 0x001C, 0x01 },
	{ 0x0B24, 0xDB },
	{ 0x0B25, 0x02 },

};

