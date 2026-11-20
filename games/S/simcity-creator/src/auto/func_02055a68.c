#include "m2c.h"

s32 func_02055a68(s32 arg0, void *arg1) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg1, s16 *, 0);
    return (s32) ((temp_r0 + ((u32) temp_r0 >> 0x1F)) << 0xF) >> 0x10;
}
