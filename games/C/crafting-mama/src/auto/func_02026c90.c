#include "m2c.h"

s32 func_02028bb8();                                /* extern */

s32 func_02026c90(void) {
    s32 var_r0;

    if (func_02028bb8() != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
