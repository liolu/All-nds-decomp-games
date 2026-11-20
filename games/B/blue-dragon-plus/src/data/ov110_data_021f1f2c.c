#include "m2c.h"
extern u8 func_ov110_021f04c0[];
extern u8 func_ov110_021f05a4[];
extern u8 func_ov110_021ef72c[];
extern u8 func_ov110_021f06f0[];
extern u8 func_ov110_021f06dc[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov110_021f1f2c[10] = {(u32) &func_ov110_021f06f0,
                               (u32) &func_ov110_021f06dc,
                               (u32) &func_ov110_021ef72c,
                               (u32) &func_ov110_021f05a4,
                               (u32) &func_ov110_021f04c0,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
