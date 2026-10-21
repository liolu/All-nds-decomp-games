#include "m2c.h"

s32 func_0202f1d8();                                /* extern */
s32 func_0202f5dc();                                /* extern */
M2C_UNK func_0202f604(M2C_UNK, s32);                /* extern */
s32 func_0202fcf0(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020300f8;

s32 func_0202fed4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_0202f5dc();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0202f1d8();
        }
        var_r4 = func_0202fcf0(arg0, &func_020300f8, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0202f604(arg0, var_r4);
        }
    }
    return var_r4;
}
