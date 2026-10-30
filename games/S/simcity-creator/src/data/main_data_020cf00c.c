#include "m2c.h"
extern u8 data_020cef88[];
extern u8 data_020ceff0[];
extern u8 data_020cf030[];
extern u8 data_020cefbc[];
extern u8 data_020cef8c[];
extern u8 data_020cef86[];
u32 data_020cf00c[9] = {
    (u32) &data_020cef86, (u32) ((u8 *) &data_020cef8c + 0x1e), (u32) &data_020cef8c, (u32) ((u8 *) &data_020cef8c + 0xe),
    (u32) &data_020cefbc, (u32) ((u8 *) &data_020cefbc + 0x1a), (u32) &data_020ceff0, (u32) &data_020cf030,
    (u32) &data_020cef88};
