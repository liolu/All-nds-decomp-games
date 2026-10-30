#include "m2c.h"

void func_020b082c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0                      = (arg1 * 0x28) + (arg0 + 0x104);
    M2C_FIELD(temp_r0, s32 *, 4) = arg2;
    M2C_FIELD(temp_r0, s32 *, 8) = arg3;
}
