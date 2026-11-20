/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02128ba8[];

u32 data_02128b80[1] = {0x00000001};
u32 data_02128b84[3] = {0x00000003, 0x00000000, (u32) &data_02128ba8};
u32 data_02128b90[6] = {0x1C311D52, 0x00000800, 0x4DB30000, 0x00000000, 0x00010000, (u32) &data_02128b84};
