/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02129ff0[];
extern u8 data_0212a008[];
extern u8 data_0212a044[];

u32 data_02129fcc[1] = {0x00000002};
u32 data_02129fd0[2] = {(u32) &data_02129ff0, (u32) &data_0212a008};
u32 data_02129fd8[3] = {0x00000004, 0x00000000, (u32) &data_0212a044};
