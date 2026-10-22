#include "m2c.h"
extern u8 func_ov112_021f0520[];
extern u8 func_ov112_021f0604[];
extern u8 func_ov112_021ef72c[];
extern u8 func_ov112_021f0750[];
extern u8 func_ov112_021f073c[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov112_021f1f8c[10] = {(u32) &func_ov112_021f0750,
                               (u32) &func_ov112_021f073c,
                               (u32) &func_ov112_021ef72c,
                               (u32) &func_ov112_021f0604,
                               (u32) &func_ov112_021f0520,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
