#include "m2c.h"
extern u8 data_02041e60[];
extern u8 data_02041f60[];
extern u8 data_021e57e0[];
extern u8 func_020f3320[];
extern u8 func_020f3370[];
extern u8 func_020f33a4[];
u32 data_02110fec[19] = {0x00000000,           0x00000124,           0x00000000,           0x00000000, 0x00000000,
                         0x00000000,           0x00000000,           (u32) &data_021e57e0, 0x00000100, (u32) &data_021e57e0,
                         0x00000000,           0x00000000,           0x00000000,           0x00000000, 0x00000000,
                         (u32) &func_020f3320, (u32) &func_020f3370, (u32) &func_020f33a4, 0x00000000};
