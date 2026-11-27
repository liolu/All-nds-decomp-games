#include "m2c.h"

s32 func_020bcb6c(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x170);
    var_r0  = 1;
    if (temp_r1 == 0) {
        return 1;
    }
    if (temp_r1 != 0x1) {
        var_r0 = 0;
    }
    return var_r0;
}
