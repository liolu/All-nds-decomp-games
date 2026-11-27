#include "m2c.h"

s32 func_0200659c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = (arg1 * 0xC) + arg0;
    return ((M2C_FIELD(temp_r0, u8 *, 6) * arg2) + M2C_FIELD(temp_r0, u16 *, 4)) << 8;
}
