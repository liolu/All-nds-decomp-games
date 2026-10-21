#include "m2c.h"

void func_0206b7a8(void *arg0, s32 arg1) {
    s32 temp_r1;

    if (arg0 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r1 | 4);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r1 & ~4);
}
