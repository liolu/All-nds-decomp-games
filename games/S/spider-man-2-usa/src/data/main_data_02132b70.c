/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02132b4c[];
extern u8 data_02132b58[];
extern u8 data_02132b64[];
extern u8 data_0214ba64[];

u32 data_02132b70[3] = {(u32) &data_02132b64, (u32) &data_02132b58, (u32) &data_02132b4c};
u32 data_02132b7c[9] = {0xEE5A20BF, 0x2FB9DB8B,           0x00000000, 0x00000000, 0x00005740,
                        0x00000000, (u32) &data_0214ba64, 0x00000001, 0x00000000};
