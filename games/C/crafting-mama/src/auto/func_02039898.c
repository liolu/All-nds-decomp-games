#include "m2c.h"

s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
M2C_UNK func_02039804(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */

void func_02039898(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s16 arg4, s16 arg5, u16 arg6) {
    s32 temp_r7;

    temp_r7 = func_0203663c(0x11);
    if (func_02031700() == 0) {
        return;
    }
    func_02039804(temp_r7, arg0, arg1, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6);
}
