#include "m2c.h"

s32 func_02031450(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x580) - M2C_FIELD(arg0, s32 *, 0x29C);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    return var_r0;
}
