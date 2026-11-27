#include "m2c.h"

s32 func_02029c8c(void *arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 1;
    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2E60) & (1 << arg1))) {
        var_r0 = 0;
    }
    return var_r0;
}
