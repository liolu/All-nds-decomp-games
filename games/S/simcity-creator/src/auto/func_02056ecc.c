#include "m2c.h"

s32 func_0205369c();                                /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
s32 func_02073360(s32, M2C_UNK);                    /* extern */
s32 func_02073e98(s32);                             /* extern */
M2C_UNK func_020ae770(s32, s32);                    /* extern */

void func_02056ecc(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02073360(M2C_FIELD(arg0, s32 *, 4), 1);
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        return;
    }
    if (func_02073e98(M2C_FIELD(arg0, s32 *, 4)) != 0) {
        return;
    }
    if ((s32) (temp_r4 - M2C_FIELD(arg0, s32 *, 0x4C)) < 3) {
        return;
    }
    func_0206fff0(M2C_FIELD(arg0, s32 *, 4));
    func_020ae770(func_0205369c(), 0x3004);
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r4;
}
