/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e2530[];
extern u8 data_020e2538[];
extern u8 data_020e2540[];
extern u8 data_020e2548[];
extern u8 data_02100040[];
extern u8 data_ov325_02295cdc[];
extern u8 data_ov325_02295d00[];
extern u8 data_ov325_02296a80[];
extern u8 data_ov325_022988b0[];
extern u8 data_ov325_022999e8[];
extern u8 data_ov325_0229a2c8[];
extern u8 data_ov325_0229b9e8[];

u32 data_ov325_02299a90[8]  = {0xFF15C100, (u32) &data_020e2530, 0xFF078100, (u32) &data_020e2538,
                               0xFF010020, (u32) &data_020e2540, 0xFF010020, (u32) &data_020e2548};
u32 data_ov325_02299ab0[14] = {0x09040100,           (u32) &data_ov325_0229a2c8, 0x01010100, (u32) &data_ov325_02295d00,
                               0x07100080,           (u32) &data_ov325_022999e8, 0x0D080200, (u32) &data_ov325_0229b9e8,
                               (u32) &data_02100040, (u32) &data_ov325_02296a80, 0x01010040, (u32) &data_ov325_02295cdc,
                               0x04040040,           (u32) &data_ov325_022988b0};
u32 data_ov325_02299ae8[22] = {0x00000000, 0x00000000, 0x012000F9, 0x0000010E, 0x00600266, 0x0064006C, 0x00000072, 0x0060006C,
                               0x0062006D, 0x00640067, 0x00000072, 0x0060026F, 0x00730071, 0x00730068, 0x00000064, 0x00740051,
                               0x0063006D, 0x006D0064, 0x00510000, 0x006D006E, 0x00600063, 0x00000072};
