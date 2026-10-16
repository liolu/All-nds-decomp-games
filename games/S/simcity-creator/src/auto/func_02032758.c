#include "m2c.h"

M2C_UNK func_020055a8(s32, s32);                    /* extern */
s32 func_02031ea8();                                /* extern */
s32 func_02031ed0(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_02032164(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_02032758(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_02031ea8();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    temp_r0 = func_02032164(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_02031ed0(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_020055a8(temp_r0, temp_r0_2);
    return temp_r0;
}
