/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020a5600[];
extern u8 data_020a5bd0[];
extern u8 data_020bd888[];

const u32 data_020a5c2c[6] = {(u32) &data_020a5bd0, (u32) &data_020a5600, (u32) &data_020bd888,
                              0xFFF1FFF1,           0x00200020,           0x00000100};
