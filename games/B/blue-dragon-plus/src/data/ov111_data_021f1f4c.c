#include "m2c.h"
extern u8 func_ov111_021f04dc[];
extern u8 func_ov111_021f05c0[];
extern u8 func_ov111_021ef72c[];
extern u8 func_ov111_021f070c[];
extern u8 func_ov111_021f06f8[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov111_021f1f4c[10] = {(u32) &func_ov111_021f070c,
                               (u32) &func_ov111_021f06f8,
                               (u32) &func_ov111_021ef72c,
                               (u32) &func_ov111_021f05c0,
                               (u32) &func_ov111_021f04dc,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
