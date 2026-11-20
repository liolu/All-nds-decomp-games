/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02067818[];
extern u8 data_020ffff4[];
extern u8 data_0210006c[];

const u32 data_02067738[2] = {0x00030D40, 0xFFFFE2B4};
const u32 data_02067740[6] = {0x00000001, 0x000001F4,           (u32) &data_02067818,
                              0x00000000, (u32) &data_0210006c, (u32) &data_020ffff4};
