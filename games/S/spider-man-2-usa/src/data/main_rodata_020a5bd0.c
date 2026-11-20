/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020a55f8[];
extern u8 data_020a6588[];
extern u8 data_020bd928[];

const u32 data_020a5bd0[5] = {(u32) &data_020a5bd0, (u32) &data_020a6588, 0x0000000E, 0x00000083, 0x00000009};
const u32 data_020a5be4[6] = {(u32) &data_020a5bd0, (u32) &data_020a55f8, (u32) &data_020bd928,
                              0xFFD1FFD1,           0x00600060,           0x00000100};
