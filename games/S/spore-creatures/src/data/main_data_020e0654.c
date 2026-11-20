#include "m2c.h"
extern u8 data_02041e60[];
extern u8 data_02041f60[];
extern u8 data_020f4d80[];
extern u8 func_020ce2f8[];
extern u8 func_020ce348[];
extern u8 func_020ce37c[];
u32 data_020e0654[19] = {0x00000000,           0x00000124,           0x00000000,           0x00000000, 0x00000000,
                         0x00000000,           0x00000000,           (u32) &data_020f4d80, 0x00000100, (u32) &data_020f4d80,
                         0x00000000,           0x00000000,           0x00000000,           0x00000000, 0x00000000,
                         (u32) &func_020ce2f8, (u32) &func_020ce348, (u32) &func_020ce37c, 0x00000000};
