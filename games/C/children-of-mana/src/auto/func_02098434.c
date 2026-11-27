#include "m2c.h"

void func_02098434(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_r2 != -1) {
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r2;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x95) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 3;
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x93) != 0) || (M2C_FIELD(arg0, s32 *, 0x3C) == 7)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x97) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
}
