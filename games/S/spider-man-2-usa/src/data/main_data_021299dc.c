/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02129a00[];
extern u8 data_02129a18[];
extern u8 data_02129a54[];

u32 data_021299dc[1] = {0x00000002};
u32 data_021299e0[2] = {(u32) &data_02129a00, (u32) &data_02129a18};
u32 data_021299e8[3] = {0x00000004, 0x00000000, (u32) &data_02129a54};
