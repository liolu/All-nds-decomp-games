/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020babb8[];
extern u8 data_020bc418[];
extern u8 data_020bc698[];
extern u8 data_020db0ac[];
extern u8 data_020dbffc[];
extern u8 data_020de8ac[];
extern u8 data_020e11b0[];
extern u8 data_020e1258[];

u32 data_020f3d90[20] = {0xFFFFFFFE, 0x00010001, 0x00000000,           (u32) &data_020de8ac,
                         0x03060418, 0x00200004, (u32) &data_020bc418, (u32) &data_020e11b0,
                         0x03060418, 0x00200008, (u32) &data_020babb8, (u32) &data_020e1258,
                         0x03060418, 0x00200008, (u32) &data_020bc698, (u32) &data_020db0ac,
                         0xFFFFFFFE, 0x00180018, 0x00000000,           (u32) &data_020dbffc};
u32 data_020f3de0[21] = {0x00010001, 0x00000000, 0x010C0105, 0x00F7C136, 0x00410000, 0x00620060, 0x0000006A,
                         0x00640051, 0x002D0073, 0x00480000, 0x0063006D, 0x00640068, 0x00710073, 0x0000006E,
                         0x00740059, 0xAA730071, 0x006A0062, 0x00400000, 0x00710073, 0x0072925F, 0x00000000};
