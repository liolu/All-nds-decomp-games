#include "m2c.h"

void *func_020746d8(u8 *arg0, s32 arg1, void *arg2) {
    u8 temp_r1;

    temp_r1                      = *arg0;
    M2C_FIELD(arg2, s32 *, 0x10) = (s32) temp_r1;
    M2C_FIELD(arg2, s32 *, 0xC)  = (s32) temp_r1;
    return arg0 + 1;
}
