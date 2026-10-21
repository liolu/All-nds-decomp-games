#include "m2c.h"

u32 func_0206eee4();                                /* extern */

u32 func_0206ef38(s32 arg0, u32 arg1, u32 arg2) {
    u32 temp_r0;
    u32 var_r0;

    temp_r0 = func_0206eee4();
    var_r0  = temp_r0 - arg1;
    if (temp_r0 < arg1) {
        return 0U;
    }
    if (var_r0 > arg2) {
        var_r0 = arg2;
    }
    return var_r0;
}
