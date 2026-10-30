/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020cfcd0[];
extern u8 data_020cfcd4[];
extern u8 data_020cfd10[];
extern u8 data_020cfd14[];
extern u8 data_020cfd18[];
extern u8 data_020cfd1c[];

const u32 data_020c4e4c[7]  = {0x000002BE, 0x000002C0, 0x000002BF, 0x000002C3, 0x000002BD, 0x000002BD, 0x000002C2};
const u32 data_020c4e68[13] = {0x00280020,           0x00100018,           0x00200020,           0x00180028,
                               0x00200028,           0x00080010,           0x00080010,           (u32) &data_020cfcd0,
                               (u32) &data_020cfcd4, (u32) &data_020cfd10, (u32) &data_020cfd14, (u32) &data_020cfd18,
                               (u32) &data_020cfd1c};
