/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d1e00[];
extern u8 data_020d3798[];
extern u8 data_020d37b4[];
extern u8 data_020d37d0[];
extern u8 data_020d3840[];
extern u8 data_020d385c[];
extern u8 data_020d3894[];
extern u8 data_020d38b0[];
extern u8 data_020d38e8[];
extern u8 data_020d3920[];
extern u8 data_020d3958[];
extern u8 data_020d39ac[];
extern u8 data_020d39e4[];
extern u8 data_020d3a00[];
extern u8 data_020d3a70[];
extern u8 data_020d561c[];

u32 data_020ff7c0[3]  = {0xFFFFFFFF, 0x00100010, 0x00000000};
u32 data_020ff7cc[29] = {(u32) &data_020d3798, 0xFFFFFFFF, 0x00100010,           0x00000000, (u32) &data_020d37b4, 0xFFFFFFFF,
                         0x00100010,           0x00000000, (u32) &data_020d37d0, 0xFFFFFFFF, 0x00100010,           0x00000000,
                         (u32) &data_020d3840, 0xFFFFFFFF, 0x00100010,           0x00000000, (u32) &data_020d385c, 0xFFFFFFFF,
                         0x00100010,           0x00000000, (u32) &data_020d3894, 0xFFFFFFFF, 0x00100010,           0x00000000,
                         (u32) &data_020d38b0, 0xFFFFFFFF, 0x00100010,           0x00000000, (u32) &data_020d38e8};
u32 data_020ff840[32] = {
    0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d3920, 0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d1e00,
    0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d561c, 0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d3958,
    0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d39ac, 0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d39e4,
    0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d3a00, 0xFFFFFFFE, 0x001600E8, 0x00000000, (u32) &data_020d3a70};
