#include "m2c.h"

s32 func_02098d4c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x1764);
    temp_r0 = arg2 - 1;
    if ((temp_r3 != 0) && ((u32) temp_r0 < 0xFU)) {
        return (temp_r0 * 0x2C) + temp_r3;
    }
    return 0;
}
