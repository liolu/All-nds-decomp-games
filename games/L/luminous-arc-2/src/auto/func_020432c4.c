#include "m2c.h"

s32 func_020432c4(s32 arg0, s32 arg1, s8 arg2) {
    s8 var_r0;
    s8 var_r2;

    var_r2 = arg2;
    var_r0 = arg0 - arg1;
    if ((s32) var_r0 < 0) {
        var_r0 = 0 - var_r0;
        var_r2 += 1;
    }
    if ((s32) var_r0 <= (s32) var_r2) {
        return 1;
    }
    return 0;
}
