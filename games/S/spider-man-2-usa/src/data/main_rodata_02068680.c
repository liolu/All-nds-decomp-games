/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_021003a4[];
extern u8 data_02100604[];
extern u8 data_021007ec[];
extern u8 data_02100b1c[];
extern u8 data_021010cc[];

const u32 data_02068680[9]  = {0x00000006,           0x00000001, (u32) &data_021010cc, 0x0000000D, 0x00000013,
                               (u32) &data_02100604, 0x00000006, 0x00000006,           0x00000000};
const u32 data_020686a4[12] = {0x00000006, 0x00000001, (u32) &data_02100b1c, 0x0000000D, 0x00000043, (u32) &data_021003a4,
                               0x0000000D, 0x00000042, (u32) &data_021007ec, 0x00000006, 0x00000006, 0x00000000};
