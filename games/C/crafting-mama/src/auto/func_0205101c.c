#include "m2c.h"

s32 func_02050dbc();                                /* extern */
s32 func_02051048();                                /* extern */

s32 func_0205101c(s32 arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 == 1) {
        var_r1 = func_02050dbc() * 0x5C;
    } else {
        var_r1 = func_02051048() << 7;
    }
    return var_r1;
}
