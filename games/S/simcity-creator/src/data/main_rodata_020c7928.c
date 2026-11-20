/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d07b0[];
extern u8 data_020d07bc[];
extern u8 data_020d07cc[];
extern u8 data_020d07d8[];
extern u8 data_020d07e8[];
extern u8 data_020d07f4[];
extern u8 data_020d0804[];
extern u8 data_020d0810[];

const u32 data_020c7928[6]  = {0x00300020, 0x00400040, 0x003000A4, 0x00400040, 0x00C00080, 0x00900090};
const u32 data_020c7940[16] = {0x00000000,           0x00010001,           0x00020002,           0x00030003,
                               0x00020002,           0x00010001,           0x00E300E6,           0x00A400A1,
                               (u32) &data_020d07b0, (u32) &data_020d07bc, (u32) &data_020d07cc, (u32) &data_020d07d8,
                               (u32) &data_020d07e8, (u32) &data_020d07f4, (u32) &data_020d0804, (u32) &data_020d0810};
