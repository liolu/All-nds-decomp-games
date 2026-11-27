#include "m2c.h"

s32 func_020439e4(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r3;

    if (arg1 < 0) {
        var_r2 = 0 - arg1;
    } else {
        var_r2 = arg1;
    }
    if (arg0 < 0) {
        var_r3 = 0 - arg0;
    } else {
        var_r3 = arg0;
    }
    if (var_r3 < var_r2) {
        if (arg1 < 0) {
            var_r0 = 0;
        } else {
            var_r0 = 2;
        }
        return var_r0;
    }
    if (arg0 < 0) {
        return 3;
    }
    return 1;
}
