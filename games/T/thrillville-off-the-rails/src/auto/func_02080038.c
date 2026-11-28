#include "m2c.h"

s32 func_0207fcc4(s32);                             /* extern */
s32 func_020803a8(s32, M2C_UNK, M2C_UNK, u8, s32);  /* extern */

s32 func_02080038(s32 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4, s32 arg5, s32 *arg6) {
    s32 var_r0;

    if (arg1 & 1) {
        var_r0 = func_020803a8(*arg0, arg2, arg3, arg4, arg5);
        if (var_r0 == 0) {
            return 6;
        }
        goto block_4;
    }
    var_r0 = func_0207fcc4(*arg0);
block_4:
    if (arg6 != NULL) {
        *arg6 = var_r0;
    }
    return 0;
}
