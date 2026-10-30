/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e0b30[];
extern u8 data_020e0b74[];
extern u8 data_020e0d98[];

u32 data_020e0b48[2] = {0x00000000, 0x00000020};
u32 data_020e0b50[3] = {(u32) &data_020e0d98, (u32) &data_020e0b74, (u32) &data_020e0b30};
