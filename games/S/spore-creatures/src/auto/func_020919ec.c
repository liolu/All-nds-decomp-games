#include "m2c.h"

s32 func_02091a6c(void *, s32, M2C_UNK, s32, s32, u8 **, s32, s32 *); /* extern */

s32 func_020919ec(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6) {
    s32 sp10;
    s32 var_r1;
    s32 var_r8;

    var_r1 = arg1;
    sp10   = 0x7FFFFFFF;
    var_r8 = arg3;
    if (*arg5 != 0) {
        do {
            var_r1 = func_02091a6c(arg0, var_r1, arg2, var_r8, arg4, &arg5, arg6, &sp10);
            var_r8 += M2C_FIELD(arg0, u16 *, 0xE);
        } while (*arg5 != 0);
    }
    return var_r1;
}
