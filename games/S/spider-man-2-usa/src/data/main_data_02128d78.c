/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02128d9c[];
extern u8 data_02128db4[];
extern u8 data_02128dcc[];

u32 data_02128d78[1] = {0x00000002};
u32 data_02128d7c[2] = {(u32) &data_02128d9c, (u32) &data_02128db4};
u32 data_02128d84[3] = {0x00000003, 0x00000000, (u32) &data_02128dcc};
