/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020c1f14[];
extern u8 data_020c1f74[];
extern u8 data_020c1fd4[];
extern u8 data_020c20e8[];

u32 data_020cc5f8[11] = {0x00000000,
                         (u32) &data_020c1f14,
                         (u32) ((u8 *) &data_020c1f14 + 0x12),
                         (u32) ((u8 *) &data_020c1f14 + 0x36),
                         (u32) &data_020c1f74,
                         (u32) &data_020c1fd4,
                         (u32) ((u8 *) &data_020c1fd4 + 0x5a),
                         (u32) ((u8 *) &data_020c1fd4 + 0xc6),
                         (u32) &data_020c20e8,
                         0x00000000,
                         0x00000000};
