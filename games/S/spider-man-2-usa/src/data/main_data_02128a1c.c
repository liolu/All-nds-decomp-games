/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02128a40[];
extern u8 data_02128a58[];
extern u8 data_02128a94[];

u32 data_02128a1c[1] = {0x00000002};
u32 data_02128a20[2] = {(u32) &data_02128a40, (u32) &data_02128a58};
u32 data_02128a28[3] = {0x00000004, 0x00000000, (u32) &data_02128a94};
