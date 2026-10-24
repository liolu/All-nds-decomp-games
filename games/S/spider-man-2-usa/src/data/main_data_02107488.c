/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02067e90[];
extern u8 data_02086f44[];
extern u8 data_020a855c[];

u32 data_02107488[7]  = {0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000019, 0x00000000};
u32 data_021074a4[13] = {(u32) &data_02067e90, 0x0000D798, 0xFFFFCEB8, 0x00000001, 0xFFFFFFFF,
                         0x00000000,           0x00000900, 0x00000008, 0x00000000, (u32) &data_020a855c,
                         (u32) &data_02086f44, 0x00000000, 0x00000000};
