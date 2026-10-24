/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02000e98[];
extern u8 func_02000e9c[];
extern u8 func_020011f4[];
extern u8 func_0201f758[];
extern u8 func_0201f7a0[];
extern u8 func_0202f33c[];
extern u8 func_0203b030[];
extern u8 func_0203b054[];

u32 data_021244a0[7]  = {0x00000005, 0x00000001, 0x00000000, 0x00000004, 0x00001000, 0x00000000, 0x00000000};
u32 data_021244bc[10] = {
    (u32) &func_0203b030, (u32) &func_0203b054, (u32) &func_0201f7a0, (u32) &func_02000e98, (u32) &func_0201f758,
    (u32) &func_020011f4, (u32) &func_02000e9c, (u32) &func_0202f33c, 0x00000000,           0x00000000};
