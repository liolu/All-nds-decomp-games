/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov050_02268cb8[];
extern u8 data_ov050_02268cd8[];
extern u8 data_ov050_02268ce8[];
extern u8 data_ov050_02268d00[];
extern u8 data_ov050_02268d18[];
extern u8 data_ov050_02268d20[];
extern u8 data_ov050_02268d30[];
extern u8 data_ov050_022691a4[];
extern u8 data_ov050_022692bc[];
extern u8 data_ov050_022692d8[];
extern u8 data_ov050_022692f4[];
extern u8 data_ov050_02269310[];
extern u8 data_ov050_0226932c[];
extern u8 data_ov050_02269348[];
extern u8 data_ov050_02269364[];
extern u8 data_ov050_022699fc[];
extern u8 data_ov050_02269a5c[];

u32 data_ov050_02269888[7]  = {0x000A3000, 0x00044000, 0x00000000, 0x00400040, 0x00000000, 0x10001000, 0x10001000};
u32 data_ov050_022698a4[9]  = {0x00000001,
                               (u32) &data_ov050_02268cb8,
                               0x0000000B,
                               (u32) &data_ov050_02269a5c,
                               0x0000000B,
                               (u32) &data_ov050_022699fc,
                               0x00000100,
                               0x000000C0,
                               (u32) &data_ov050_02268d18};
u32 data_ov050_022698c8[16] = {0x0000FFFC, 0x00620061, (u32) &data_ov050_02268cd8, (u32) &data_ov050_022692d8,
                               0x0300FFFC, 0x000C000C, (u32) &data_ov050_02268ce8, (u32) &data_ov050_022692bc,
                               0x0300FFFC, 0x000C000C, (u32) &data_ov050_02268d00, (u32) &data_ov050_022692f4,
                               0x0300FFFC, 0x000C0018, (u32) &data_ov050_02268d30, (u32) &data_ov050_02269310};
u32 data_ov050_02269908[20] = {0x0000FFFC, 0x001C001C, (u32) &data_ov050_02268d20, (u32) &data_ov050_022691a4,
                               0x0300FFFC, 0x000C000C, (u32) &data_ov050_02268ce8, (u32) &data_ov050_02269364,
                               0x0300FFFC, 0x000C000C, (u32) &data_ov050_02268ce8, (u32) &data_ov050_02269348,
                               0x0300FFFC, 0x000C000C, (u32) &data_ov050_02268d00, (u32) &data_ov050_022691a4,
                               0x0300FFFC, 0x000C000C, (u32) &data_ov050_02268d00, (u32) &data_ov050_0226932c};
