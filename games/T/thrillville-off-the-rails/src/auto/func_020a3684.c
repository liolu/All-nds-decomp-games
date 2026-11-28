#include "m2c.h"

s32 func_020a3684(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(arg0, s32(**)(), 0x18)();
    }
    return var_r1;
}
