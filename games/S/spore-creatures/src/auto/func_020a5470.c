#include "m2c.h"

s32 func_020b1330(s32, s32);                        /* extern */
s32 func_020c136c(s32);                             /* extern */

void func_020a5470(void *arg0, u32 arg1) {
    s32 temp_r0;

    temp_r0 = func_020b1330((arg1 >> 1) << 0xC, (func_020c136c(M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(arg0, s32 *, 8)) + 2)
                                                    << 0xC);
    if (M2C_FIELD(arg0, s32 *, 0x128) == temp_r0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10C) | 2);
    M2C_FIELD(arg0, s32 *, 0x128) = temp_r0;
}
