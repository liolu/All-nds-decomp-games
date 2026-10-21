#include "m2c.h"

s32 func_02037efc(M2C_UNK, M2C_UNK, M2C_UNK, u16, s32); /* extern */
M2C_UNK func_0203824c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020380cc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4) {
    s32 temp_r0;

    temp_r0 = func_02037efc(arg0, 0, 0, arg4, 1);
    if (temp_r0 == 0) {
        return;
    }
    func_0203824c(temp_r0, arg1, arg2, arg3);
}
