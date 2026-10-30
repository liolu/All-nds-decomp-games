/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0214acd8[];
extern u8 data_0214ace0[];
extern u8 data_0214ad84[];
extern u8 data_0214ada0[];
extern u8 data_0214ae08[];
extern u8 data_0214b008[];
extern u8 data_0214b018[];

u32 data_0214acf0[2]  = {(u32) &data_0214b018, (u32) &data_0214ad84};
u32 data_0214acf8[3]  = {(u32) &data_0214b008, (u32) &data_0214ada0, (u32) &data_0214acd8};
u32 data_0214ad04[32] = {(u32) &data_0214b008, (u32) &data_0214ae08, (u32) &data_0214ace0, 0x00000000,
                         (u32) &data_0214acf0, 0x020999CC,           0x02099A40,           0x00000000,
                         (u32) &data_0214acd8, 0x02099AFC,           0x02099ADC,           0x02099AF0,
                         0x00000000,           (u32) &data_0214acf8, 0x020999B4,           0x02099B78,
                         0x02099ABC,           0x00000000,           (u32) &data_0214ace0, 0x02099AD8,
                         0x02099AC4,           0x00000000,           0x00000000,           0x00000000,
                         (u32) &data_0214ad04, 0x02099BAC,           0x02099B98,           0x02099B00,
                         0x02099B28,           0x65637865,           0x6F697470,           0x0000006E};
