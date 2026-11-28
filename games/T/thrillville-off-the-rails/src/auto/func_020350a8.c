#include "m2c.h"

M2C_UNK func_02034b84(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0207981c(M2C_UNK, M2C_UNK, s32, s32);      /* extern */

s32 func_020350a8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    func_02034b84(arg0, arg1, 0);
    if (func_0207981c(arg2, arg3, arg4, arg5) == 0) {
        return 1;
    }
    return 0;
}
