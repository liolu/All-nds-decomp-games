#include "m2c.h"

s32 func_0200aa78(s32);                             /* extern */
s32 func_0200ab38(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0200ab58(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02071cd4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r0;

    if (func_0200ab58(arg0 + 0xEC, arg3, 0) == 0) {
        return -1;
    }
    if (func_0200ab38(arg0 + 0xEC, arg1, arg2) < 0) {
        return -1;
    }
    var_r0 = func_0200aa78(arg0 + 0xEC);
    if (var_r0 < 0) {
        var_r0 = -1;
    }
    return var_r0;
}
