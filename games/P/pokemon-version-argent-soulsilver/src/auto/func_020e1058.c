#include "m2c.h"

s32 func_020e107c();                                /* extern */
s32 func_020e1134();                                /* extern */

s32 func_020e1058(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020e1134() != 0) {
        var_r4 = func_020e107c();
    }
    return var_r4;
}
