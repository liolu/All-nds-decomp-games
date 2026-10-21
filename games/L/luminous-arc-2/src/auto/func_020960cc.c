#include "m2c.h"

M2C_UNK func_0200766c(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_020955f4(s32, s32, s32, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_0211d7d4;
extern s8 data_02170d04;

void func_020960cc(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s8 var_r1;

    func_0200766c(&data_0211d7d4, arg0 + 6, 6);
    if (func_020955f4(arg0, arg0 + 6, arg1 - 6, arg2, arg3) < 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    data_02170d04 = var_r1;
}
