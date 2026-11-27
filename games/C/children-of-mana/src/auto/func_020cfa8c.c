#include "m2c.h"

s32 func_020cfa8c(s32 arg0, void *arg1) {
    s32 var_r0;

    var_r0 = 1;
    if (M2C_FIELD(arg1, u8 *, 0x20) == 0) {
        return 1;
    }
    if (M2C_FIELD(arg1, u8 *, 0x21) != 0) {
        var_r0 = 0;
    }
    return var_r0;
}
