/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov002_021e82a4[];
extern u8 data_ov002_021e8324[];
extern u8 data_ov002_021e8384[];
extern u8 data_ov002_021e840c[];
extern u8 data_ov002_021e849c[];
extern u8 data_ov002_021e84b8[];
extern u8 data_ov002_021e8520[];
extern u8 data_ov002_021e855c[];
extern u8 func_ov002_021e03b8[];
extern u8 func_ov002_021e0444[];

u32 data_ov002_02204ce0[2]  = {0xFFFE8000, 0x00118000};
u32 data_ov002_02204ce8[5]  = {0x00038000, 0x00058000, 0x00078000, 0x00098000, 0x000B8000};
u32 data_ov002_02204cfc[8]  = {0x00028000, 0x00028000, 0x00028000, 0x00038000, 0x00040000, 0x00020000, 0x00030000, 0x00040000};
u32 data_ov002_02204d1c[10] = {0x0000002D, 0x0000002D, 0x0000002D, 0x0000002D, 0x00000078,
                               0x0000002D, 0x0000002D, 0x0000003C, 0x00000000, 0x00000000};
u32 data_ov002_02204d44[14] = {0x021E2958,
                               0x021E296C,
                               0x021E2988,
                               (u32) &data_ov002_021e8324,
                               0x021E2C24,
                               (u32) &data_ov002_021e8384,
                               (u32) &data_ov002_021e849c,
                               (u32) &data_ov002_021e84b8,
                               (u32) &data_ov002_021e8520,
                               (u32) &data_ov002_021e82a4,
                               (u32) &data_ov002_021e840c,
                               (u32) &data_ov002_021e855c,
                               0x00000000,
                               0x00000000};
u32 data_ov002_02204d7c[15] = {0x021E2D3C,
                               0x021E2D94,
                               0x021E2DF4,
                               (u32) &data_ov002_021e8324,
                               0x021E3FEC,
                               (u32) &data_ov002_021e8384,
                               (u32) &data_ov002_021e849c,
                               (u32) &data_ov002_021e84b8,
                               0x021E43F8,
                               (u32) &data_ov002_021e82a4,
                               (u32) &data_ov002_021e840c,
                               (u32) &data_ov002_021e855c,
                               0x021E4064,
                               0x00000000,
                               0x00000000};
u32 data_ov002_02204db8[16] = {(u32) &func_ov002_021e03b8,
                               (u32) &func_ov002_021e0444,
                               0x021E04D8,
                               (u32) &data_ov002_021e8324,
                               0x021E17D8,
                               (u32) &data_ov002_021e8384,
                               (u32) &data_ov002_021e849c,
                               (u32) &data_ov002_021e84b8,
                               (u32) &data_ov002_021e8520,
                               (u32) &data_ov002_021e82a4,
                               (u32) &data_ov002_021e840c,
                               (u32) &data_ov002_021e855c,
                               0x021E18A8,
                               0x021E1934,
                               0x00000000,
                               0x00000000};
