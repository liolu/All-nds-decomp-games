#include "m2c.h"
extern u8 data_020cff24[];
extern u8 data_020cff2c[];
extern u8 data_020cff34[];
extern u8 data_020cff2c[];
u32 data_020cff4c[9] = {(u32) &data_020cff2c,
                        (u32) &data_020cff2c,
                        (u32) ((u8 *) &data_020cff2c + 0x2),
                        (u32) &data_020cff34,
                        (u32) ((u8 *) &data_020cff34 + 0x6),
                        (u32) ((u8 *) &data_020cff34 + 0x6),
                        (u32) ((u8 *) &data_020cff34 + 0x6),
                        (u32) ((u8 *) &data_020cff34 + 0xe),
                        (u32) ((u8 *) &data_020cff24 + 0x6)};
