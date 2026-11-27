#include "m2c.h"

s32 func_02016124();                                /* extern */
s32 func_02047354(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_0205946c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02016124() == 0) {
        return 0;
    }
    if (func_02047354(M2C_FIELD(arg0, s32 *, 0x44), arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}
