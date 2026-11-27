#include "m2c.h"

s32 func_020641b4(void *arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 1;
    if (!(M2C_FIELD(arg0, u16 *, 0x22) & (1 << arg1))) {
        var_r0 = 0;
    }
    return var_r0;
}
