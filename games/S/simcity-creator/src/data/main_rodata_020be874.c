/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020c81a0[];
extern u8 data_020c81a4[];
extern u8 data_020c81a8[];
extern u8 data_020c81b4[];
extern u8 data_020c81c0[];
extern u8 data_020c81cc[];

const u32 data_020be874[3]  = {0x31302F2E, 0x35343332, 0x39383736};
const u32 data_020be880[4]  = {0x03020100, 0x07060504, 0x0B0A0908, 0x000E0D0C};
const u32 data_020be890[8]  = {(u32) &data_020c81cc, (u32) &data_020c81a8, (u32) &data_020c81a0, 0x0000003A,
                               (u32) &data_020c81c0, (u32) &data_020c81b4, (u32) &data_020c81a4, 0x0000003A};
const u32 data_020be8b0[18] = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
                               0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001,
                               0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001};
