/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov001_0221b810[];
extern u8 data_ov001_0221b824[];
extern u8 data_ov001_0221b838[];
extern u8 data_ov001_0221b84c[];
extern u8 data_ov001_0221b874[];

#pragma explicit_zero_data on
u32 data_ov001_0221b7c8[1] = {0};
u32 data_ov001_0221b7cc[2] = {(u32) &data_ov001_0221b874, (u32) &data_ov001_0221b84c};
u32 data_ov001_0221b7d4[7] = {(u32) &data_ov001_0221b810,
                              (u32) &data_ov001_0221b7c8,
                              (u32) &data_ov001_0221b7c8,
                              (u32) &data_ov001_0221b838,
                              (u32) &data_ov001_0221b824,
                              0x00401278,
                              0x00000002};
#pragma explicit_zero_data on
u32 data_ov001_0221b7f0[8] = {0};
