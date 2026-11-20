/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02127fb4[];
extern u8 data_02127fcc[];
extern u8 data_02128008[];

u32 data_02127f90[1] = {0x00000002};
u32 data_02127f94[2] = {(u32) &data_02127fb4, (u32) &data_02127fcc};
u32 data_02127f9c[3] = {0x00000003, 0x00000000, (u32) &data_02128008};
