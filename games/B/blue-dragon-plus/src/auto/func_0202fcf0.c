#include "m2c.h"

s32 func_0202f4cc();                                /* extern */
s32 func_0202f4f4(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_0202f788(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0203772c(s32, s32);                    /* extern */

s32 func_0202fcf0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_0202f4cc();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    temp_r0 = func_0202f788(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_0202f4f4(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_0203772c(temp_r0, temp_r0_2);
    return temp_r0;
}
