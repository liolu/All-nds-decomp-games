#include "m2c.h"

extern s32 data_020d0230;

s32 func_02017c0c(void *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x2E8) != data_020d0230) {
        var_r0 = 1;
    }
    return var_r0;
}
