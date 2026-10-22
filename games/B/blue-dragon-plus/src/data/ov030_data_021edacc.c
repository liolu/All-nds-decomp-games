#include "m2c.h"
extern u8 func_ov030_021ed3b8[];
extern u8 func_ov030_021ed9f0[];
extern u8 func_ov030_021ed2ec[];
extern u8 func_ov030_021eda0c[];
extern u8 func_ov030_021ed9f8[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov030_021edacc[10] = {(u32) &func_ov030_021eda0c,
                               (u32) &func_ov030_021ed9f8,
                               (u32) &func_ov030_021ed2ec,
                               (u32) &func_ov030_021ed9f0,
                               (u32) &func_ov030_021ed3b8,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
