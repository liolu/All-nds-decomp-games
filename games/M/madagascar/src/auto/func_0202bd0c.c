/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202944c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0202bdb0();                            /* extern */
s32 func_0202be38();                                /* extern */
extern u8 data_020d0288;
extern s8 data_020d0290;
extern s32 data_020d02a4;

void func_0202bd0c(s32 arg0) {
    if (data_020d0288 != 0) {
        return;
    }
    data_020d0290 = 1;
    data_020d02a4 = arg0;
    func_0202be38();
    func_0202bdb0();
    func_0202944c(func_0202be38(), 0xC);
}
