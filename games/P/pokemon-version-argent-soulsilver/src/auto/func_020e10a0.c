#include "m2c.h"

s32 func_020e10c4();                                /* extern */
s32 func_020e1134();                                /* extern */

s32 func_020e10a0(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020e1134() != 0) {
        var_r4 = func_020e10c4();
    }
    return var_r4;
}
