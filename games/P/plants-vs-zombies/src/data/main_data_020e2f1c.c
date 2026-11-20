/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e2ec0[];
extern u8 data_020e2ec8[];
extern u8 data_020e2f58[];
extern u8 data_020e2f78[];

u32 data_020e2f1c[12] = {(u32) &data_020e2f78, 0x00000000, 0x00000003, 0x00000000,
                         (u32) &data_020e2f58, 0x00000004, 0x00000006, (u32) &data_020e2ec8,
                         (u32) &data_020e2ec0, 0x00000000, 0x00000000, 0x00000000};
