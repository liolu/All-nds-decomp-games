#include "m2c.h"

s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_0204ad68(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_0204acd8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s32 arg8,
                  s32 arg9, s32 argA) {
    s32 temp_r4;

    temp_r4 = func_0203663c(0x22);
    if (func_02031700() == 0) {
        return 0;
    }
    return func_0204ad68(temp_r4, arg0, arg1, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, (s32) arg7, arg8, arg9, argA);
}
