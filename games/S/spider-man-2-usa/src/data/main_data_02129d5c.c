/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02129d80[];
extern u8 data_02129d98[];
extern u8 data_02129dd4[];

u32 data_02129d5c[1] = {0x00000002};
u32 data_02129d60[2] = {(u32) &data_02129d80, (u32) &data_02129d98};
u32 data_02129d68[3] = {0x00000004, 0x00000000, (u32) &data_02129dd4};
