#include "m2c.h"
extern u8 func_ov040_021ed320[];
extern u8 func_ov040_021ed608[];
extern u8 func_ov040_021ed2ec[];
extern u8 func_ov040_021ed624[];
extern u8 func_ov040_021ed610[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov040_021ed6ec[10] = {(u32) &func_ov040_021ed624,
                               (u32) &func_ov040_021ed610,
                               (u32) &func_ov040_021ed2ec,
                               (u32) &func_ov040_021ed608,
                               (u32) &func_ov040_021ed320,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
