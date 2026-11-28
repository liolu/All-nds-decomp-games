#include "m2c.h"

void func_020caa68(void *arg0, void *arg1) {
    u32 temp_r1;

    if (((u32) (M2C_FIELD(arg0, volatile s32 *, 0xA4) << 0xE) >> 0x1A) != 0x1A) {
        return;
    }
    temp_r1 = (u32) (M2C_FIELD(arg1, volatile s32 *, 0xB4) << 0x1C) >> 0x1C;
    if ((temp_r1 != 1) && (temp_r1 != 0)) {
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xA4) | 0x20000000);
}
