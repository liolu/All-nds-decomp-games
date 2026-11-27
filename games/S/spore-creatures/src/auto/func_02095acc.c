#include "m2c.h"

s32 func_020956f0(s32);                             /* extern */
s32 func_02095a34(void *);                          /* extern */
s32 func_020cdb7c(s32, s32);                        /* extern */

s32 func_02095acc(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r4;
    s32 var_r5;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0) + ((func_020cdb7c(arg1 + (temp_r2 - 1), temp_r2) - 1) << 5);
    var_r5  = func_020956f0(temp_r4);
    if ((var_r5 == 0) && (func_02095a34(arg0) != 0)) {
        var_r5 = func_020956f0(temp_r4);
    }
    return var_r5;
}
