/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov255_02291f08[];
extern u8 data_ov255_02291f10[];
extern u8 data_ov255_022922d8[];
extern u8 data_ov255_022931b8[];
extern u8 data_ov255_022931f0[];
extern u8 data_ov255_02293228[];
extern u8 data_ov255_022937a0[];
extern u8 data_ov255_02297a54[];
extern u8 data_ov255_02298b28[];

u32 data_ov255_02294e1c[18] = {0x00010000, 0x00000000, 0xC1A20153, 0x00000152, 0x0064004B, 0x00640075,
                               0x0000006B, 0x0068004D, 0x002D0075, 0x004B0000, 0x00750068, 0x0000002D,
                               0x0064004B, 0x00640075, 0x0000006B, 0x0068004D, 0x00640075, 0x0000006B};
u32 data_ov255_02294e64[20] = {0xFFFFFFFE,
                               0x006000F8,
                               0x00000000,
                               (u32) &data_ov255_022931b8,
                               0x0100FFFD,
                               0x002000B8,
                               (u32) &data_ov255_02298b28,
                               (u32) &data_ov255_022931f0,
                               0x0100FFFD,
                               0x002000B8,
                               (u32) &data_ov255_02297a54,
                               (u32) &data_ov255_02293228,
                               0x0A03FFFC,
                               0x001C0026,
                               (u32) &data_ov255_02291f10,
                               (u32) &data_ov255_022937a0,
                               0x0B03FFFC,
                               0x001E0024,
                               (u32) &data_ov255_02291f08,
                               (u32) &data_ov255_022922d8};
