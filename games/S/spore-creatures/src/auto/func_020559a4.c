#include "m2c.h"

s32 func_020559a4(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 1064), s32 *, 0x0);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    return var_r0;
}
