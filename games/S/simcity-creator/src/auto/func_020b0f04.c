#include "m2c.h"

s32 func_020b0dbc(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020b0e38();                                /* extern */

s32 func_020b0f04(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;

    temp_r0 = func_020b0e38();
    if (temp_r0 < 0) {
        return 0;
    }
    return func_020b0dbc(arg0, temp_r0, arg2, arg3, arg4);
}
