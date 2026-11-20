/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov211_02268cd0[];
extern u8 data_ov211_02268d18[];
extern u8 data_ov211_02268d38[];
extern u8 data_ov211_02268ecc[];
extern u8 data_ov211_02268f04[];
extern u8 data_ov211_02268f3c[];
extern u8 data_ov211_02268f74[];

u32 data_ov211_02269f00[3]  = {0x00600068, 0x00430000, 0x00680064};
u32 data_ov211_02269f0c[14] = {0x0064006D, 0x0052001F, 0x0068026F, 0x006B0064, 0x00680071, 0x00670062, 0x00740073,
                               0x0266006D, 0x00510000, 0x00620064, 0x0071006E, 0x00680071, 0x006E0063, 0x00000000};
u32 data_ov211_02269f44[18] = {0x0004FFFC, 0x0038003C, (u32) &data_ov211_02268d18, (u32) &data_ov211_02268ecc,
                               0x0104FFFC, 0x00080008, (u32) &data_ov211_02268cd0, (u32) &data_ov211_02268f74,
                               0x0104FFFC, 0x00080008, (u32) &data_ov211_02268d38, (u32) &data_ov211_02268f04,
                               0x0104FFFC, 0x00080008, (u32) &data_ov211_02268d38, (u32) &data_ov211_02268f3c,
                               0x0104FFFC, 0x00080008};
