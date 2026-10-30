#include "m2c.h"

s32 func_02023184();                                /* extern */
s32 func_020231ac(M2C_UNK);                         /* extern */
s32 func_020231d8(M2C_UNK, s32, M2C_UNK, s32);      /* extern */

s32 func_0202312c(M2C_UNK arg0, s32 arg1, s32 *arg2, M2C_UNK arg3, s32 arg4) {
    if (func_02023184() == 0) {
        return 0;
    }
    if (func_020231d8(arg0, *arg2, arg3, arg4) == 0) {
        return 0;
    }
    if (func_020231ac(arg0) != 0) {
        return 1;
    }
    return 0;
}
