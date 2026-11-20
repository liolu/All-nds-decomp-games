#include "m2c.h"

s32 func_020c9634();                                /* extern */
s32 func_020c99a4();                                /* extern */
M2C_UNK func_020c99cc(M2C_UNK, s32);                /* extern */
s32 func_020ca220(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020ca5f8;

s32 func_020ca398(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_020c99a4();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_020c9634();
        }
        var_r4 = func_020ca220(arg0, &func_020ca5f8, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_020c99cc(arg0, var_r4);
        }
    }
    return var_r4;
}
