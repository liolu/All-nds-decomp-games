#include "m2c.h"
extern u8 data_ov362_022e11e8[];
extern u8 data_ov362_022e1200[];
extern u8 data_ov362_022e1280[];
u32 data_ov362_022e11ec[5] = {(u32) &data_ov362_022e1200, 0x00000080, (u32) &data_ov362_022e1280, 0x00000003,
                              (u32) &data_ov362_022e11e8};
