/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0207c2bc[];
extern u8 data_0207c31c[];
extern u8 data_0208313c[];
extern u8 data_0208e304[];
extern u8 func_02033648[];
extern u8 func_020336dc[];

u32 data_02083154[2]  = {(u32) &func_02033648, (u32) &func_020336dc};
u32 data_0208315c[10] = {(u32) &data_0208e304, (u32) &data_0208313c, 0x00000000, 0x00000002, (u32) &data_0207c31c,
                         0x00000002,           (u32) &data_0207c2bc, 0x00001802, 0x00000000, (u32) &data_0208315c};
