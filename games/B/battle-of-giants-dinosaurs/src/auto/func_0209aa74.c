#include "m2c.h"

s32 func_0209aa74(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x90);
    var_r2  = -1;
    if (temp_r1 != -1) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0xEC) - temp_r1;
    }
    return var_r2;
}
