/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov125_02268d90[];
extern u8 data_ov125_02268da0[];
extern u8 data_ov125_02268da8[];
extern u8 data_ov125_02268e40[];
extern u8 data_ov125_02268e48[];
extern u8 data_ov125_02268e58[];
extern u8 data_ov125_02268e78[];
extern u8 data_ov125_02268eb0[];
extern u8 data_ov125_02268eb8[];
extern u8 data_ov125_02268ec0[];
extern u8 data_ov125_02268ec8[];
extern u8 data_ov125_02268ed8[];
extern u8 data_ov125_02268f00[];
extern u8 data_ov125_022691cc[];
extern u8 data_ov125_022691e8[];
extern u8 data_ov125_02269ed0[];
extern u8 data_ov125_02269eec[];
extern u8 data_ov125_02269f08[];
extern u8 data_ov125_02269f24[];
extern u8 data_ov125_02269f40[];
extern u8 data_ov125_02269f5c[];
extern u8 data_ov125_02269f94[];
extern u8 data_ov125_02269fb0[];
extern u8 data_ov125_02269fcc[];
extern u8 data_ov125_02269fe8[];
extern u8 data_ov125_0226a004[];
extern u8 data_ov125_0226a020[];
extern u8 data_ov125_0226a03c[];
extern u8 data_ov125_0226a2dc[];
extern u8 data_ov125_0226a314[];
extern u8 data_ov125_0226a330[];
extern u8 data_ov125_0226a3d8[];
extern u8 data_ov125_0226a3f4[];
extern u8 data_ov125_0226a42c[];
extern u8 data_ov125_0226a448[];
extern u8 data_ov125_0226a6f8[];
extern u8 data_ov125_0226a740[];
extern u8 data_ov125_0226aa9c[];

u32 data_ov125_0226c164[7]  = {0x002D0071, 0x004D0000, 0x001F006E, 0x0074026F, 0x00630064, 0x00720064, 0x0269001F};
u32 data_ov125_0226c180[22] = {0x02660074, 0x00710060, 0x0060006B, 0xFFFF002D, 0x00600058, 0x0067001F, 0x02780060, 0x0074001F,
                               0x0060006D, 0x0065001F, 0x00620068, 0x00600067, 0x0063001F, 0x0061006E, 0x0064006B, 0x0064001F,
                               0x001F006D, 0x00640075, 0x00730071, 0x00620068, 0x006B0060, 0x0000002D};
u32 data_ov125_0226c1d8[41] = {0x00000109, 0x00100064, (u32) &data_ov125_0226aa9c, (u32) &data_ov125_0226a2dc,
                               0x0204FFFC, 0x001B0020, (u32) &data_ov125_02268e58, (u32) &data_ov125_0226a314,
                               0x00000109, 0x00100064, (u32) &data_ov125_0226a740, (u32) &data_ov125_0226a330,
                               0x00000109, 0x00100064, (u32) &data_ov125_0226a6f8, (u32) &data_ov125_0226a3d8,
                               0x0204FFFC, 0x000E0020, (u32) &data_ov125_02268d90, (u32) &data_ov125_0226a3f4,
                               0x0204FFFC, 0x00150007, (u32) &data_ov125_02268da0, (u32) &data_ov125_0226a42c,
                               0x0304FFFC, 0x00200010, (u32) &data_ov125_02268da8, (u32) &data_ov125_0226a448,
                               0x0304FFFC, 0x00100020, (u32) &data_ov125_02268eb0, (u32) &data_ov125_0226a03c,
                               0x0304FFFC, 0x00100010, (u32) &data_ov125_02268ec8, (u32) &data_ov125_0226a020,
                               0x0304FFFC, 0x00100010, (u32) &data_ov125_02268ec0, (u32) &data_ov125_0226a004,
                               0x0304FFFC};
u32 data_ov125_0226c27c[49] = {0x00100010, (u32) &data_ov125_02268eb8, (u32) &data_ov125_02269fe8, 0x0304FFFC,
                               0x00100010, (u32) &data_ov125_02268e78, (u32) &data_ov125_02269fcc, 0x0304FFFC,
                               0x00100010, (u32) &data_ov125_02268e40, (u32) &data_ov125_02269fb0, 0x0304FFFC,
                               0x00100010, (u32) &data_ov125_02268e48, (u32) &data_ov125_02269f94, 0x0304FFFC,
                               0x00100020, (u32) &data_ov125_02268f00, (u32) &data_ov125_022691e8, 0x0304FFFC,
                               0x00100010, (u32) &data_ov125_02268ec8, (u32) &data_ov125_02269f5c, 0x0304FFFC,
                               0x00100010, (u32) &data_ov125_02268e48, (u32) &data_ov125_02269f40, 0x0504FFFC,
                               0x00200010, (u32) &data_ov125_02268ed8, (u32) &data_ov125_02269f24, 0x0504FFFC,
                               0x00200010, (u32) &data_ov125_02268ed8, (u32) &data_ov125_02269f08, 0x0504FFFC,
                               0x00200010, (u32) &data_ov125_02268ed8, (u32) &data_ov125_02269eec, 0x0504FFFC,
                               0x00200010, (u32) &data_ov125_02268ed8, (u32) &data_ov125_02269ed0, 0x0504FFFC,
                               0x00200010, (u32) &data_ov125_02268ed8, (u32) &data_ov125_022691cc, 0x0504FFFC,
                               0x00200010};
