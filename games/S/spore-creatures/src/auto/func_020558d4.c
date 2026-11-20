#include "m2c.h"

s32 func_020558d4(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x418);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    if (var_r0 != 0) {
        return 1;
    }
    return 0;
}
