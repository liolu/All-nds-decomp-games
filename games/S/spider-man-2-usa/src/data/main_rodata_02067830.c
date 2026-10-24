/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02067800[];
extern u8 data_020ffff4[];
extern u8 data_02100010[];

const u32 data_02067830[6] = {0x00000000, 0x00000001,           (u32) &data_02067800,
                              0x00000000, (u32) &data_02100010, (u32) &data_020ffff4};
