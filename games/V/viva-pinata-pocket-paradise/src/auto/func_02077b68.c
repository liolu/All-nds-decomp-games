#include "m2c.h"

s32 func_02077b68(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;

    var_r0  = arg0;
    temp_r3 = (arg2 - arg1) + 1;
    if (temp_r3 == 0) {
        return arg1;
    }
    if (var_r0 < arg1) {
        do {
            var_r0 += temp_r3;
        } while (var_r0 < arg1);
    }
    if (var_r0 <= arg2) {
        return var_r0;
    }
    do {
        var_r0 -= temp_r3;
    } while (var_r0 > arg2);
    return var_r0;
}
