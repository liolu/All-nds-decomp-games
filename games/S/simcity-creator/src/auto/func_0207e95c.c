#include "m2c.h"

void func_0207e95c(void *arg0, s32 arg1) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x20);
    if (arg1 < temp_r2) {
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r2;
    }
}
