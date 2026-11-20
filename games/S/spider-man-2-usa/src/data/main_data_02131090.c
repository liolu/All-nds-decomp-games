/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0213040c[];
extern u8 data_02130430[];
extern u8 data_02130454[];
extern u8 data_02130478[];
extern u8 data_0213049c[];
extern u8 data_021304c0[];
extern u8 data_021304e4[];
extern u8 data_02130508[];
extern u8 data_0213052c[];
extern u8 data_02130550[];
extern u8 data_02130574[];
extern u8 data_02130598[];
extern u8 data_021305bc[];
extern u8 data_021305e0[];
extern u8 data_02130604[];
extern u8 data_02130628[];
extern u8 data_0213064c[];
extern u8 data_02130670[];
extern u8 data_02130694[];
extern u8 data_021306b8[];
extern u8 data_021306dc[];
extern u8 data_02130700[];
extern u8 data_02130724[];
extern u8 data_02130748[];
extern u8 data_0213076c[];
extern u8 data_02130790[];
extern u8 data_021307b4[];
extern u8 data_021307d8[];
extern u8 data_021307fc[];
extern u8 data_02130820[];
extern u8 data_02130844[];
extern u8 data_02130868[];
extern u8 data_0213088c[];
extern u8 data_021308b0[];
extern u8 data_021308d4[];
extern u8 data_021308f8[];
extern u8 data_0213091c[];
extern u8 data_02130940[];
extern u8 data_02130964[];
extern u8 data_02130988[];
extern u8 data_021309ac[];
extern u8 data_021309d0[];
extern u8 data_021309f4[];
extern u8 data_02130a18[];
extern u8 data_02130a3c[];
extern u8 data_02130a60[];
extern u8 data_02130a84[];
extern u8 data_02130aa8[];
extern u8 data_02130acc[];
extern u8 data_02130af0[];
extern u8 data_02130b14[];
extern u8 data_02130b38[];
extern u8 data_02130b5c[];
extern u8 data_02130b80[];
extern u8 data_02130ba4[];
extern u8 data_02130bc8[];
extern u8 data_02130bec[];
extern u8 data_02130c10[];
extern u8 data_02130c34[];
extern u8 data_02130c58[];
extern u8 data_02130c7c[];
extern u8 data_02130ca0[];
extern u8 data_02130cc4[];
extern u8 data_02130ce8[];
extern u8 data_02130d0c[];
extern u8 data_02130d30[];
extern u8 data_02130d54[];
extern u8 data_02130d78[];
extern u8 data_02130d9c[];
extern u8 data_02130dc0[];
extern u8 data_02130de4[];
extern u8 data_02130e08[];
extern u8 data_02130e2c[];
extern u8 data_02130e50[];
extern u8 data_02130e74[];
extern u8 data_02130e98[];
extern u8 data_02130ebc[];
extern u8 data_02130ee0[];
extern u8 data_02130f04[];
extern u8 data_02130f28[];
extern u8 data_02130f4c[];
extern u8 data_02130f70[];
extern u8 data_02130f94[];
extern u8 data_02130fb8[];
extern u8 data_02130fdc[];
extern u8 data_02131000[];
extern u8 data_02131048[];
extern u8 data_0213106c[];
extern u8 data_02141950[];

u32 data_02131090[9]  = {0x7693FBD5, 0xF592DCC2,           0x00000000, 0x00000000, 0x00000006,
                         0x00000000, (u32) &data_02141950, 0x00000001, 0x00000000};
u32 data_021310b4[89] = {
    (u32) &data_02130820, (u32) &data_02130868, (u32) &data_0213088c, (u32) &data_021308b0, (u32) &data_021308d4,
    (u32) &data_021308f8, (u32) &data_0213091c, (u32) &data_02130940, (u32) &data_02130964, (u32) &data_02130988,
    (u32) &data_021309ac, (u32) &data_02130f04, (u32) &data_021309d0, (u32) &data_021309f4, (u32) &data_02130a18,
    (u32) &data_02130e74, (u32) &data_02130a3c, (u32) &data_02130a60, (u32) &data_02130a84, (u32) &data_02130de4,
    (u32) &data_02130aa8, (u32) &data_02130acc, (u32) &data_02130af0, (u32) &data_02130b14, (u32) &data_02130b38,
    (u32) &data_02130b5c, (u32) &data_02130b80, (u32) &data_02130cc4, (u32) &data_02130ba4, (u32) &data_02130bc8,
    (u32) &data_02130bec, (u32) &data_02130c10, (u32) &data_02130c34, (u32) &data_02130c58, (u32) &data_02130c7c,
    (u32) &data_02130ca0, (u32) &data_02130ce8, (u32) &data_02130d0c, (u32) &data_02130d30, (u32) &data_02130d54,
    (u32) &data_02130d78, (u32) &data_02130d9c, (u32) &data_02130dc0, (u32) &data_02130e08, (u32) &data_02130e2c,
    (u32) &data_02130e50, (u32) &data_02130e98, (u32) &data_02130ebc, (u32) &data_02130ee0, (u32) &data_02130f28,
    (u32) &data_02130f4c, (u32) &data_02130f70, (u32) &data_02130f94, (u32) &data_02130fb8, (u32) &data_02130fdc,
    (u32) &data_02131000, (u32) &data_02131048, (u32) &data_0213106c, (u32) &data_02131090, (u32) &data_02130844,
    (u32) &data_0213040c, (u32) &data_02130430, (u32) &data_02130454, (u32) &data_021307b4, (u32) &data_02130478,
    (u32) &data_0213049c, (u32) &data_021304c0, (u32) &data_02130724, (u32) &data_021304e4, (u32) &data_02130508,
    (u32) &data_0213052c, (u32) &data_02130550, (u32) &data_02130574, (u32) &data_02130598, (u32) &data_021305bc,
    (u32) &data_021305e0, (u32) &data_02130604, (u32) &data_02130628, (u32) &data_0213064c, (u32) &data_02130670,
    (u32) &data_02130694, (u32) &data_021306b8, (u32) &data_021306dc, (u32) &data_02130700, (u32) &data_02130748,
    (u32) &data_0213076c, (u32) &data_02130790, (u32) &data_021307d8, (u32) &data_021307fc};
