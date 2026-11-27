#include "m2c.h"

s32 func_0203ce2c(void *arg0) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 5) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 1) {
        var_r0 = 1;
    }
    return var_r0;
}
