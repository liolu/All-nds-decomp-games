#include "m2c.h"

s32 func_0209faf4(M2C_UNK, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0209fbd4(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_0209f868(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    M2C_UNK var_r3;
    s32 var_r4;
    s32 var_r6;

    var_r4 = arg3;
    var_r6 = arg1;
    if (var_r6 == 0) {
        var_r4 |= 1;
    }
    if (var_r4 & 1) {
        if (var_r4 & 4) {
            var_r3 = 1;
        } else {
            var_r3 = 0;
        }
        var_r6 = func_0209faf4(arg0, var_r6, arg2, var_r3);
    }
    if ((var_r6 != 0) && (var_r4 & 2)) {
        func_0209fbd4(arg0, var_r6, arg2);
    }
    return var_r6;
}
