/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e0d4c[];
extern u8 data_020e0d64[];
extern u8 func_020260ec[];
extern u8 func_02026100[];

u32 data_020e0d90[2] = {0x00000000, (u32) &data_020e0d4c};
u32 data_020e0d98[4] = {(u32) &func_020260ec, (u32) &func_02026100, 0x00000000, (u32) &data_020e0d64};
