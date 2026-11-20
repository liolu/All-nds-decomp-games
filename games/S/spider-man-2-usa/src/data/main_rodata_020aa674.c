/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020aa4d0[];
extern u8 data_020aaad8[];
extern u8 data_020ed788[];

const u32 data_020aa674[5] = {(u32) &data_020aa674, (u32) &data_020aaad8, 0x0000001B, 0x00000024, 0x0000000D};
const u32 data_020aa688[6] = {(u32) &data_020aa674, (u32) &data_020aa4d0, (u32) &data_020ed788,
                              0x00000000,           0x00C000FF,           0x00000100};
