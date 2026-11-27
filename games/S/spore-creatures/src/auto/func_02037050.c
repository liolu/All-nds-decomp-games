#include "m2c.h"

s32 func_02036f58(s32, s32 *);                      /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */

s32 *func_02037050(s32 *arg0) {
    s32 var_r0;

    var_r0 = func_02093480(0x64);
    if (var_r0 != 0) {
        var_r0 = func_02036f58(var_r0, arg0);
    }
    *arg0 = var_r0;
    return arg0;
}
