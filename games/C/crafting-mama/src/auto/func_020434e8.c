#include "m2c.h"

M2C_UNK func_0202f598(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0202f698(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(s32);                             /* extern */

void func_020434e8(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;

    temp_r4 = func_0203663c(arg3);
    if (func_02031700() == 0) {
        return;
    }
    if (arg3 == 0x2F) {
        func_0202f598(temp_r4, 0, arg0, arg1, arg2);
        return;
    }
    func_0202f698(temp_r4, 0, 0, arg0, arg1, arg2, -1, -1, -1, 0);
}
