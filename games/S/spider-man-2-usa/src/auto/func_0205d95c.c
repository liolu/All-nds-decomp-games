/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020574e0(s32, s32);                    /* extern */
s32 func_0205d01c(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_0205d0a0();                                /* extern */
s32 func_0205d534(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_0205d95c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_0205d0a0();
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_0205d534(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_0205d01c(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_020574e0(temp_r0, temp_r0_2);
    return temp_r0;
}
