#include "m2c.h"

s32 func_0207f880(s32);                             /* extern */

s32 func_0207f95c(s32 arg0) {
    s32 var_r0;

    var_r0 = func_0207f880(0xFFFF | (arg0 << 0x10));
    if (var_r0 != -1) {
        var_r0 -= 0x10;
    }
    return var_r0;
}
