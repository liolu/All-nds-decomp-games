#include "m2c.h"

s32 func_0209b6d8(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x20);
    var_r2  = -1;
    if (temp_r1 != -1) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x44) - temp_r1;
    }
    return var_r2;
}
