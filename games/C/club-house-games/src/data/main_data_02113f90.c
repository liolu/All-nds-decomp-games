/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020bba48[];
extern u8 data_020bc568[];
extern u8 data_020bca40[];
extern u8 data_020bcb68[];
extern u8 data_020bcdb8[];
extern u8 data_020bd280[];
extern u8 data_020bd3f8[];
extern u8 data_020c23dc[];
extern u8 data_020c2430[];
extern u8 data_020c2484[];
extern u8 data_020c24a0[];
extern u8 data_020c2548[];
extern u8 data_020c33b8[];
extern u8 data_020c3428[];
extern u8 data_020c3984[];
extern u8 data_020c5450[];
extern u8 data_020c5530[];
extern u8 data_020c59c8[];
extern u8 data_020c5ba4[];
extern u8 data_020c5c84[];
extern u8 data_020c5d64[];
extern u8 data_020c5e28[];
extern u8 data_020c5e7c[];
extern u8 data_020c63d8[];
extern u8 data_020c64d4[];
extern u8 data_020c6528[];
extern u8 data_020c65ec[];
extern u8 data_020c6624[];
extern u8 data_020c66e8[];
extern u8 data_020c6a4c[];
extern u8 data_020c6ee4[];
extern u8 data_020c7a44[];
extern u8 data_020c7b08[];
extern u8 data_020c7be8[];
extern u8 data_020c7d8c[];
extern u8 data_020c7dfc[];
extern u8 data_020cb1d4[];
extern u8 data_020cc0b4[];
extern u8 data_020cc3a8[];
extern u8 data_020cc3c4[];
extern u8 data_020cd6cc[];
extern u8 data_020d1fc0[];
extern u8 data_020db9c0[];
extern u8 data_020dc344[];
extern u8 data_020dd748[];
extern u8 data_020df348[];
extern u8 data_020df380[];
extern u8 data_020df524[];
extern u8 data_020df7a8[];
extern u8 data_020df930[];
extern u8 data_020dffdc[];
extern u8 data_020e0394[];
extern u8 data_020e05e0[];
extern u8 data_020e0634[];
extern u8 data_020e066c[];
extern u8 data_020e06dc[];

u32 data_02113f90[16] = {0x0006FFFC, 0x00040004, (u32) &data_020bc568, (u32) &data_020c6a4c,
                         0x0011FFFC, 0x000F000B, (u32) &data_020bd280, (u32) &data_020d1fc0,
                         0x0011FFFC, 0x000A000B, (u32) &data_020bba48, (u32) &data_020cd6cc,
                         0x0011FFFC, 0x000B000B, (u32) &data_020bcb68, (u32) &data_020e05e0};
u32 data_02113fd0[84] = {
    0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8, (u32) &data_020df380, 0x0011FFFC,
    0x00090009,           (u32) &data_020bca40, (u32) &data_020cc0b4, 0x0011FFFC,           0x000B000B,
    (u32) &data_020bcb68, (u32) &data_020c65ec, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8,
    (u32) &data_020c6624, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020c6528,
    0x0011FFFC,           0x00150015,           (u32) &data_020bd3f8, (u32) &data_020e0634, 0x0011FFFC,
    0x00050005,           (u32) &data_020bcdb8, (u32) &data_020dc344, 0x0011FFFC,           0x000A000B,
    (u32) &data_020bba48, (u32) &data_020c3984, 0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68,
    (u32) &data_020e066c, 0x0011FFFC,           0x000F000B,           (u32) &data_020bd280, (u32) &data_020df524,
    0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020c7a44, 0x0011FFFC,
    0x000B000B,           (u32) &data_020bcb68, (u32) &data_020c66e8, 0x0011FFFC,           0x00050005,
    (u32) &data_020bcdb8, (u32) &data_020c63d8, 0x0011FFFC,           0x00090009,           (u32) &data_020bca40,
    (u32) &data_020c64d4, 0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020c7d8c,
    0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8, (u32) &data_020c7dfc, 0x0011FFFC,
    0x000A000B,           (u32) &data_020bba48, (u32) &data_020c7be8, 0x0011FFFC,           0x00150015,
    (u32) &data_020bd3f8, (u32) &data_020db9c0, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8,
    (u32) &data_020dd748, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020c3428,
    0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020e06dc};
u32 data_02114120[100] = {
    0x0006FFFC,           0x00040004,           (u32) &data_020bc568, (u32) &data_020c6a4c, 0x0011FFFC,
    0x00150015,           (u32) &data_020bd3f8, (u32) &data_020c6ee4, 0x0011FFFC,           0x00050005,
    (u32) &data_020bcdb8, (u32) &data_020dffdc, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48,
    (u32) &data_020c5e28, 0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020c5e7c,
    0x0011FFFC,           0x000F000B,           (u32) &data_020bd280, (u32) &data_020c24a0, 0x0011FFFC,
    0x000A000B,           (u32) &data_020bba48, (u32) &data_020c33b8, 0x0011FFFC,           0x000B000B,
    (u32) &data_020bcb68, (u32) &data_020df348, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8,
    (u32) &data_020e0394, 0x0011FFFC,           0x00090009,           (u32) &data_020bca40, (u32) &data_020df7a8,
    0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020c5c84, 0x0011FFFC,
    0x00050005,           (u32) &data_020bcdb8, (u32) &data_020c5d64, 0x0011FFFC,           0x000A000B,
    (u32) &data_020bba48, (u32) &data_020c5ba4, 0x0011FFFC,           0x00150015,           (u32) &data_020bd3f8,
    (u32) &data_020c2430, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8, (u32) &data_020c23dc,
    0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020cc3a8, 0x0011FFFC,
    0x000B000B,           (u32) &data_020bcb68, (u32) &data_020cb1d4, 0x0011FFFC,           0x000F000B,
    (u32) &data_020bd280, (u32) &data_020c2484, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48,
    (u32) &data_020cc3c4, 0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020c7b08,
    0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8, (u32) &data_020c2548, 0x0011FFFC,
    0x00090009,           (u32) &data_020bca40, (u32) &data_020c5450, 0x0011FFFC,           0x000B000B,
    (u32) &data_020bcb68, (u32) &data_020c5530, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8,
    (u32) &data_020df930, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020c59c8};
