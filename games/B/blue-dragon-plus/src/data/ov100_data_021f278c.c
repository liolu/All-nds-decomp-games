#include "m2c.h"
extern u8 func_ov100_021f0a10[];
extern u8 func_ov100_021f0b38[];
extern u8 func_ov100_021ef730[];
extern u8 func_ov100_021f0c84[];
extern u8 func_ov100_021f0c70[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov100_021f278c[10] = {(u32) &func_ov100_021f0c84,
                               (u32) &func_ov100_021f0c70,
                               (u32) &func_ov100_021ef730,
                               (u32) &func_ov100_021f0b38,
                               (u32) &func_ov100_021f0a10,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
