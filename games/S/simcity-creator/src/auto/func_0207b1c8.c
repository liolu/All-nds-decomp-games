#include "m2c.h"

void func_0207b1c8(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    void *temp_r1;

    temp_r1 = arg0 + (arg1 * 8);
    *arg2   = M2C_FIELD(temp_r1, s32 *, 0x20);
    *arg3   = M2C_FIELD(temp_r1, s32 *, 0x24);
}
