/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e0a5c[];
extern u8 data_020e0a90[];
extern u8 data_020e0ae0[];
extern u8 data_020e0d98[];
extern u8 data_020e0da8[];

u32 data_020e0a64[2] = {(u32) &data_020e0da8, (u32) &data_020e0a90};
u32 data_020e0a6c[5] = {(u32) &data_020e0d98, (u32) &data_020e0ae0, (u32) &data_020e0a5c, 0x00000000, (u32) &data_020e0a6c};
