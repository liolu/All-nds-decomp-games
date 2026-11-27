#include "m2c.h"

M2C_UNK func_020ac054(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ac15c(M2C_UNK, s32);                /* extern */

s32 func_02055e3c(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r4_2;

    if (arg2 == 1) {
        var_r4 = 0;
        do {
            func_020ac15c(arg1, arg0 + var_r4);
            var_r4 += 1;
        } while (var_r4 < 5);
    } else if (arg2 == 0) {
        var_r4_2 = 0;
        do {
            func_020ac054(arg1, arg0 + var_r4_2);
            var_r4_2 += 1;
        } while (var_r4_2 < 5);
    }
    return 1;
}
