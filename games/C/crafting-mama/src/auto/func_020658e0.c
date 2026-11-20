#include "m2c.h"

s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_02065940(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

s32 func_020658e0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s16 arg4) {
    s32 temp_r4;

    temp_r4 = func_0203663c(0x48);
    if (func_02031700() == 0) {
        return 0;
    }
    return func_02065940(arg0, arg1, arg2, arg3, (s32) arg4, temp_r4);
}
