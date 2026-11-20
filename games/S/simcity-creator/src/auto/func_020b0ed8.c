#include "m2c.h"

s32 func_020b0d34(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020b0e38();                                /* extern */

s32 func_020b0ed8(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020b0e38();
    if (temp_r0 < 0) {
        return 0;
    }
    return func_020b0d34(arg0, temp_r0, arg2);
}
