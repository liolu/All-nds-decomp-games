/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200e644(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_0200f21c(s32, M2C_UNK);                    /* extern */
extern s32 data_0212e924;
extern s32 data_0212e928;
extern s32 data_0212e92c;
extern M2C_UNK func_020e4364;
extern M2C_UNK func_020e4368;

void func_020e4448(s32 arg0) {
    data_0212e928 = func_0200e644(func_0200f21c((arg0 * 0x24) + 8, 0), arg0, 0x24, 8, &func_020e4368, &func_020e4364);
    data_0212e924 = arg0;
    data_0212e92c = 0;
}
