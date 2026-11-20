#include "m2c.h"
extern u8 func_ov028_021ed320[];
extern u8 func_ov028_021ed328[];
extern u8 func_ov028_021ed2ec[];
extern u8 func_ov028_021ed344[];
extern u8 func_ov028_021ed330[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov028_021ed40c[10] = {(u32) &func_ov028_021ed344,
                               (u32) &func_ov028_021ed330,
                               (u32) &func_ov028_021ed2ec,
                               (u32) &func_ov028_021ed328,
                               (u32) &func_ov028_021ed320,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
