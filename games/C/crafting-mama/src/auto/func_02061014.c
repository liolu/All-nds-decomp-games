#include "m2c.h"

s32 func_02074db8();                                /* extern */

s32 func_02061014(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02074db8() != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
