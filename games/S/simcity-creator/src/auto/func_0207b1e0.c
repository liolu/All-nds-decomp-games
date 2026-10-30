#include "m2c.h"

void func_0207b1e0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0                         = arg0 + (arg1 * 8);
    M2C_FIELD(temp_r0, s32 *, 0x20) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg3;
}
