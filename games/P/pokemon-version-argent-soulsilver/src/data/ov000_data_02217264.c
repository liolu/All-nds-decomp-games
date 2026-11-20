#include "m2c.h"
extern u8 data_ov000_02217260[];
extern u8 data_ov000_02217278[];
extern u8 data_ov000_022172f8[];
u32 data_ov000_02217264[5] = {(u32) &data_ov000_02217278, 0x00000080, (u32) &data_ov000_022172f8, 0x00000003,
                              (u32) &data_ov000_02217260};
