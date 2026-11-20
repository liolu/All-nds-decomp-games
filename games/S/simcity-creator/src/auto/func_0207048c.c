#include "m2c.h"

void func_0207048c(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    void *temp_r0;

    temp_r0                            = arg0 + (arg1 * 4);
    M2C_FIELD(temp_r0, s32 *, 0x5912C) = (s32) *arg2;
    M2C_FIELD(temp_r0, s32 *, 0x59140) = (s32) *arg3;
}
