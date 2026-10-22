#include "m2c.h"
extern u8 func_ov041_021ed330[];
extern u8 func_ov041_021ed510[];
extern u8 func_ov041_021ed2ec[];
extern u8 func_ov041_021ed52c[];
extern u8 func_ov041_021ed518[];
extern u8 data_ov009_021786f1[];
extern u8 data_ov009_02178701[];
extern u8 data_ov009_02178711[];
u32 data_ov041_021ed5ec[10] = {(u32) &func_ov041_021ed52c,
                               (u32) &func_ov041_021ed518,
                               (u32) &func_ov041_021ed2ec,
                               (u32) &func_ov041_021ed510,
                               (u32) &func_ov041_021ed330,
                               (u32) &data_ov009_021786f1,
                               (u32) &data_ov009_02178701,
                               (u32) &data_ov009_02178711,
                               0x00000000,
                               0x00000000};
