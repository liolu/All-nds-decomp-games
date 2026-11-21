#include "m2c.h"

s32 func_02096d58();                                /* extern */

s32 func_0209708c(void *arg0, s32 *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if ((*arg1 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 8) <= 1U)) {
        var_r3                      = func_02096d58(arg0, arg1);
        M2C_FIELD(arg0, s8 *, 0x12) = 0;
    }
    return var_r3;
}
