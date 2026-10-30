#include "m2c.h"

s32 func_02061214();                                /* extern */

s32 func_02061260(void) {
    s32 var_r0;

    var_r0 = func_02061214();
    if (var_r0 != 0) {
        var_r0 = ((var_r0 - 1) * 4) + 1;
    }
    return var_r0;
}
