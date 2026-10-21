/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ca1c4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020d096c();                            /* extern */
s32 func_020d0d28(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020d0e2c();                                /* extern */
extern s16 data_020f92c8;
extern s32 data_020f92cc;

s32 func_020d0fc4(void) {
    s32 temp_r0;

    if (func_020d0e2c() != 0) {
        return 3;
    }
    temp_r0 = func_020d0d28(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d096c();
    func_020ca1c4(0xA, 0);
    data_020f92cc = 0;
    data_020f92c8 = 0;
    return 0;
}
