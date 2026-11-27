#include "m2c.h"

s32 func_020a0b7c(M2C_UNK *, s32, M2C_UNK);         /* extern */
M2C_UNK func_020a0ce4(s32, s32);                    /* extern */
s32 func_020a0e5c();                                /* extern */
extern M2C_UNK func_020a0de8;

s32 func_020a0dac(void) {
    s32 temp_r0;

    temp_r0 = func_020a0e5c();
    if (temp_r0 == 0) {
        return -0x31;
    }
    func_020a0ce4(temp_r0, func_020a0b7c(&func_020a0de8, temp_r0, 1));
    return temp_r0;
}
