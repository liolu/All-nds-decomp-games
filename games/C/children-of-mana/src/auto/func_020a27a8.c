#include "m2c.h"

s32 func_020a27a8(void *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 4) <= 1U) {
        var_r0 = 1;
    }
    return var_r0;
}
