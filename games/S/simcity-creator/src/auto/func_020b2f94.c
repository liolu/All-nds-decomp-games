#include "m2c.h"

void func_020b2f94(s32 arg0, void *arg1, s32 arg2) {
    s16 temp_r2;
    s16 temp_r3;

    if (arg2 & 1) {
        temp_r3                     = M2C_FIELD(arg1, s16 *, 0xA);
        M2C_FIELD(arg1, s16 *, 0xA) = (s16) (M2C_FIELD(arg1, s16 *, 0xE) - 1);
        M2C_FIELD(arg1, s16 *, 0xE) = (s16) (temp_r3 - 1);
    }
    if (!(arg2 & 2)) {
        return;
    }
    temp_r2                      = M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg1, s16 *, 0xC)  = (s16) (M2C_FIELD(arg1, s16 *, 0x10) - 1);
    M2C_FIELD(arg1, s16 *, 0x10) = (s16) (temp_r2 - 1);
}
