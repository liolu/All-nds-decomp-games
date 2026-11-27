#include "m2c.h"

s32 func_01ffcd38(s32, M2C_UNK);                    /* extern */
s32 func_020a1e48(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020a1e04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if ((arg0 != 0) && (func_01ffcd38(arg0, arg2) != 0)) {
        return 1;
    }
    if (func_020a1e48(arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}
