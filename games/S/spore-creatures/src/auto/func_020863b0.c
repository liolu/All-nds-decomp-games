#include "m2c.h"

s32 func_02085bc8();                                /* extern */
s32 func_02085f7c();                                /* extern */
M2C_UNK func_02085fa4(M2C_UNK, s32);                /* extern */
s32 func_02086310(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020866c0;

s32 func_020863b0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02085f7c();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02085bc8();
        }
        var_r4 = func_02086310(arg0, &func_020866c0, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02085fa4(arg0, var_r4);
        }
    }
    return var_r4;
}
