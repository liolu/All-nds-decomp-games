#include "m2c.h"
extern u8 data_ov000_02217058[];
extern u8 data_ov000_02217070[];
extern u8 data_ov000_022170c0[];
u32 data_ov000_0221705c[5] = {(u32) &data_ov000_02217070, 0x00000080, (u32) &data_ov000_022170c0, 0x00000003,
                              (u32) &data_ov000_02217058};
