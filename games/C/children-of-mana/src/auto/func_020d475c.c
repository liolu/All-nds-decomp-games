#include "m2c.h"

s32 func_020d475c(void *arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg1 != 0) || ((arg1 == 0) && (M2C_FIELD(arg0, s32 *, 0x6C) != 0))) {
        var_r2 = 1;
    }
    return var_r2;
}
