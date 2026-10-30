/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e2ec0[];
extern u8 data_020e2f1c[];
extern u8 data_020e2f74[];
extern u8 data_020e2f90[];
extern u8 func_0204f878[];

u32 data_020e2ee0[3]  = {(u32) &data_020e2f1c, 0x0000000C, (u32) &func_0204f878};
u32 data_020e2eec[12] = {(u32) &data_020e2f90, 0x00000000, 0x00000006, (u32) &data_020e2ee0,
                         (u32) &data_020e2f74, 0x00000008, 0x00000002, 0x00000000,
                         (u32) &data_020e2ec0, 0x00000000, 0x00000000, 0x00000000};
