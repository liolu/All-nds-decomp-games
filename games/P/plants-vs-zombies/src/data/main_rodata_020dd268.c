/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020f42cc[];
extern u8 data_020f4308[];
extern u8 data_020f4314[];
extern u8 data_020f4428[];
extern u8 data_020f459c[];
extern u8 data_020f4620[];
extern u8 data_020f462c[];
extern u8 data_020f4680[];
extern u8 data_020f4b58[];
extern u8 data_020f4b68[];
extern u8 data_020f4b78[];
extern u8 data_020f4b88[];
extern u8 data_020f4b98[];
extern u8 data_020f4bc8[];
extern u8 data_020f4bd8[];
extern u8 data_020f4bf8[];
extern u8 data_020f4c08[];
extern u8 data_020f4d08[];
extern u8 data_020f4df8[];
extern u8 data_020f4e18[];
extern u8 data_020f4e28[];
extern u8 data_020f4e38[];
extern u8 data_020f4e48[];
extern u8 data_020f4e58[];
extern u8 data_020f4e68[];
extern u8 data_020f4e78[];
extern u8 data_020f4eb8[];
extern u8 data_020f4ed8[];
extern u8 data_020f4ef8[];
extern u8 data_020f4f08[];
extern u8 data_020f4f28[];
extern u8 data_020f4f38[];
extern u8 data_020f4f48[];
extern u8 data_020f4f58[];
extern u8 data_020f4f68[];
extern u8 data_020f4f78[];
extern u8 data_020f4fa0[];
extern u8 data_020f4fb4[];
extern u8 data_020f4fc8[];
extern u8 data_020f4fdc[];
extern u8 data_020f4ff0[];
extern u8 data_020f5004[];
extern u8 data_020f5018[];
extern u8 data_020f502c[];
extern u8 data_020f5054[];
extern u8 data_020f50cc[];
extern u8 data_020f50e0[];
extern u8 data_020f50f4[];
extern u8 data_020f5108[];
extern u8 data_020f516c[];
extern u8 data_020f5180[];
extern u8 data_020f5194[];
extern u8 data_020f51a8[];
extern u8 data_020f525c[];
extern u8 data_020f5464[];
extern u8 data_020f5478[];

const u32 data_020dd268[87] = {(u32) &data_020f462c, 0x00000002, 0x00000000, (u32) &data_020f4314, 0x00000008, 0x00000000,
                               (u32) &data_020f4df8, 0x0000002F, 0x00000000, (u32) &data_020f4d08, 0x0000005E, 0x00000000,
                               (u32) &data_020f4e18, 0x00000050, 0x00000000, (u32) &data_020f50cc, 0x00000032, 0x00000000,
                               (u32) &data_020f50e0, 0x00000035, 0x00000000, (u32) &data_020f4f78, 0x00000038, 0x00000000,
                               (u32) &data_020f50f4, 0x0000003B, 0x00000000, (u32) &data_020f5108, 0x0000003E, 0x00000000,
                               (u32) &data_020f4f68, 0x00000041, 0x00000000, (u32) &data_020f4f38, 0x00000044, 0x00000000,
                               (u32) &data_020f4f48, 0x00000047, 0x00000000, (u32) &data_020f4f28, 0x0000004A, 0x00000000,
                               (u32) &data_020f4f58, 0x0000004D, 0x00000000, (u32) &data_020f4b98, 0x0000000B, 0x00000000,
                               (u32) &data_020f4b88, 0x0000000E, 0x00000000, (u32) &data_020f4bf8, 0x00000011, 0x00000000,
                               (u32) &data_020f4bc8, 0x00000014, 0x00000000, (u32) &data_020f4b68, 0x00000017, 0x00000000,
                               (u32) &data_020f4c08, 0x00000023, 0x00000000, (u32) &data_020f4b58, 0x00000026, 0x00000000,
                               (u32) &data_020f4bd8, 0x00000029, 0x00000000, (u32) &data_020f4b78, 0x0000002C, 0x00000000,
                               (u32) &data_020f4308, 0x00000054, 0x00000000, (u32) &data_020f5464, 0x00000059, 0x00000000,
                               (u32) &data_020f5478, 0x0000005A, 0x00000000, (u32) &data_020f459c, 0x00000051, 0x00000000,
                               0x00000000,           0x00000000, 0x00000000};
const u32 data_020dd3c4[90] = {(u32) &data_020f4314, 0x00000000, 0x00000000, (u32) &data_020f42cc, 0x00000001, 0x00000000,
                               (u32) &data_020f4428, 0x00000013, 0x00000000, (u32) &data_020f4680, 0x00000022, 0x00000000,
                               (u32) &data_020f4620, 0x00000028, 0x00000000, (u32) &data_020f4eb8, 0x00000030, 0x00000000,
                               (u32) &data_020f4f08, 0x00000031, 0x00000000, (u32) &data_020f4e28, 0x00000032, 0x00000000,
                               (u32) &data_020f4e78, 0x00000033, 0x00000000, (u32) &data_020f4e38, 0x00000034, 0x00000000,
                               (u32) &data_020f4e48, 0x00000004, 0x00000000, (u32) &data_020f4ef8, 0x00000005, 0x00000000,
                               (u32) &data_020f4e58, 0x00000006, 0x00000000, (u32) &data_020f4e68, 0x00000007, 0x00000000,
                               (u32) &data_020f4ed8, 0x00000008, 0x00000000, (u32) &data_020f4fa0, 0x00000016, 0x00000000,
                               (u32) &data_020f5054, 0x00000017, 0x00000000, (u32) &data_020f4fb4, 0x00000018, 0x00000000,
                               (u32) &data_020f4fc8, 0x00000019, 0x00000000, (u32) &data_020f525c, 0x00000023, 0x00000000,
                               (u32) &data_020f5194, 0x00000024, 0x00000000, (u32) &data_020f5180, 0x00000025, 0x00000000,
                               (u32) &data_020f516c, 0x00000026, 0x00000000, (u32) &data_020f51a8, 0x00000027, 0x00000000,
                               (u32) &data_020f4fdc, 0x00000028, 0x00000000, (u32) &data_020f4ff0, 0x00000029, 0x00000000,
                               (u32) &data_020f5004, 0x0000002A, 0x00000000, (u32) &data_020f5018, 0x0000002B, 0x00000000,
                               (u32) &data_020f502c, 0x0000002C, 0x00000000, 0x00000000,           0x00000000, 0x00000000};
