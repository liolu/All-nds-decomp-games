/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e30c4[];
extern u8 data_020e3140[];
extern u8 data_020e316c[];
extern u8 data_020e317c[];
extern u8 data_020e3184[];
extern u8 data_020e3240[];
extern u8 data_020e3530[];
extern u8 data_020e3580[];
extern u8 data_020e3688[];
extern u8 func_02052c2c[];
extern u8 func_02052c54[];

u32 data_020e30d0[2]  = {0x00000000, 0x00000001};
u32 data_020e30d8[3]  = {(u32) &data_020e3580, 0x00000014, (u32) &func_02052c2c};
u32 data_020e30e4[11] = {
    (u32) &data_020e3688, 0x00000164,           (u32) &func_02052c54, (u32) &data_020e317c, 0x00000000, 0x00000006,
    (u32) &data_020e30e4, (u32) &data_020e30c4, 0x00000000,           0x00000000,           0x00000000};
u32 data_020e3110[12] = {0x00000000, (u32) &data_020e316c, 0x00000001, (u32) &data_020e3140, 0x00000002, (u32) &data_020e3184,
                         0x00000003, (u32) &data_020e3240, 0x00000004, (u32) &data_020e3530, 0xFFFFFFFF, 0x00000000};
