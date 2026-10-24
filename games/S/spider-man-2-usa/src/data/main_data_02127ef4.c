/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02127f18[];
extern u8 data_02127f30[];
extern u8 data_02127f6c[];

u32 data_02127ef4[1] = {0x00000002};
u32 data_02127ef8[2] = {(u32) &data_02127f18, (u32) &data_02127f30};
u32 data_02127f00[3] = {0x00000003, 0x00000000, (u32) &data_02127f6c};
