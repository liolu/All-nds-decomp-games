#include "m2c.h"

s32 func_020892f4(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (arg0 < arg1) {
        return arg1;
    }
    if (arg0 <= var_r2) {
        var_r2 = arg0;
    }
    return var_r2;
}
