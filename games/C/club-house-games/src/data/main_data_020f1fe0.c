/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020c8b00[];
extern u8 data_020c9d28[];
extern u8 data_020cf908[];
extern u8 data_020cfed4[];
extern u8 data_020e1124[];
extern u8 data_020e1290[];

u32 data_020f1fe0[8]  = {0xFFFFFFFE, 0x000A0064, 0x00000000, (u32) &data_020c9d28,
                         0xFFFFFFFE, 0x00160016, 0x00000000, (u32) &data_020cf908};
u32 data_020f2000[12] = {0xFFFFFFFF, 0x00100010,           0x00000000, (u32) &data_020e1290, 0xFFFFFFFF, 0x00100010,
                         0x00000000, (u32) &data_020e1290, 0xFFFFFFFE, 0x00160016,           0x00000000, (u32) &data_020cfed4};
u32 data_020f2030[18] = {0xFFFFFFFE, 0x000A0064,           0x00000000, (u32) &data_020c9d28, 0xFFFFFFFE, 0x00160016,
                         0x00000000, (u32) &data_020cf908, 0xFFFFFFFE, 0x00100050,           0x00000000, (u32) &data_020e1124,
                         0xFFFFFFFE, 0x000C000C,           0x00000000, (u32) &data_020c8b00, 0xFFFFFFFE, 0x00160016};
