#include "m2c.h"

s32 func_0209d65c(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (arg0 == 0) {
        return 0;
    }
    if (arg0 > 0) {
        var_r0_2 = arg0 - arg1;
        if (var_r0_2 < 0) {
            var_r0_2 = 0;
        }
        return var_r0_2;
    }
    var_r0 = arg0 + arg1;
    if (var_r0 > 0) {
        var_r0 = 0;
    }
    return var_r0;
}
