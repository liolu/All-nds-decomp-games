#include "m2c.h"

s32 func_02066070(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    return var_r0;
}
