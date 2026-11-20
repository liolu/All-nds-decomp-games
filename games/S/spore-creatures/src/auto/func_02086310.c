#include "m2c.h"

s32 func_0208457c(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02085ebc();                                /* extern */
s32 func_02085ee4(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_020b5ba4(s32, s32);                    /* extern */

s32 func_02086310(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_02085ebc();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 3) {
        return 0;
    }
    temp_r0 = func_0208457c(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_02085ee4(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_020b5ba4(temp_r0, temp_r0_2);
    return temp_r0;
}
