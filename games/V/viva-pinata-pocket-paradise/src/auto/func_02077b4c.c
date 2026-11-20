#include "m2c.h"

s32 func_02077b4c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = arg1;
    var_r2 = arg2;
    if (arg0 >= var_r1) {
        if (arg0 <= var_r2) {
            var_r2 = arg0;
        }
        var_r1 = var_r2;
    }
    return var_r1;
}
