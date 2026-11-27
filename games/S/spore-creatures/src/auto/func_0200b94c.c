#include "m2c.h"

s32 func_0200a25c();                                /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */

s32 *func_0200b94c(s32 *arg0) {
    s32 var_r0;

    var_r0 = func_02093480(0xD0);
    if (var_r0 != 0) {
        var_r0 = func_0200a25c();
    }
    *arg0 = var_r0;
    return arg0;
}
