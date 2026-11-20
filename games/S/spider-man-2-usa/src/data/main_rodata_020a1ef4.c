/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020a1e54[];
extern u8 data_020a1e7c[];
extern u8 data_020a1e94[];
extern u8 data_020a1eac[];
extern u8 data_020a1edc[];
extern u8 data_020ab128[];
extern u8 data_020ab328[];
extern u8 data_020ab528[];

const u32 data_020a1ef4[6]  = {0xFFE5FFE4, 0x000D0001, 0x0001FFE5, 0x000DFFE4, 0x000D0001, 0x0001000D};
const u32 data_020a1f0c[55] = {
    (u32) &data_020a1e94, (u32) &data_020ab128, 0xFFE2FFE2,           0x003E003E,           0x00000004,
    (u32) &data_020a1e54, 0x00000000,           0x00000000,           0x00000000,           0x00000000,
    0x00000000,           (u32) &data_020a1eac, (u32) &data_020ab328, 0xFFE3FFE3,           0x003C003C,
    0x00000004,           (u32) &data_020a1e54, 0x00000000,           0x00000000,           0x00000000,
    0x00000000,           0x00000000,           (u32) &data_020a1edc, (u32) &data_020ab328, 0xFFE4FFE4,
    0x003A003A,           0x00000004,           (u32) &data_020a1e54, 0x00000000,           0x00000000,
    0x00000000,           0x00000000,           0x00000000,           (u32) &data_020a1e7c, (u32) &data_020ab528,
    0xFFE5FFE5,           0x00380038,           0x00000004,           (u32) &data_020a1e54, 0x00000000,
    0x00000000,           0x00000000,           0x00000000,           0x00000000,           (u32) &data_020a1ef4,
    (u32) &data_020ab128, 0xFFE6FFE6,           0x00360036,           0x00000004,           (u32) &data_020a1e54,
    0x00000000,           0x00000000,           0x00000000,           0x00000000,           0x00000000};
