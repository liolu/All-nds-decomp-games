#include "m2c.h"

s32 func_0202dc7c(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (var_r0 != 0) {
        var_r0 -= 0x480;
    }
    return var_r0;
}
