#include "m2c.h"
extern u8 func_ov060_021f2414[];
extern u8 func_ov060_021f2954[];
extern u8 func_ov060_021ef738[];
extern u8 func_ov060_021f387c[];
extern u8 func_ov060_021f3868[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov060_021f522c[10] = {(u32) &func_ov060_021f387c,
                               (u32) &func_ov060_021f3868,
                               (u32) &func_ov060_021ef738,
                               (u32) &func_ov060_021f2954,
                               (u32) &func_ov060_021f2414,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
