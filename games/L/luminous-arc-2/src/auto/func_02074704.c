#include "m2c.h"

void *func_02074704(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0) + (M2C_FIELD(arg0, u8 *, 1) << 8) + (M2C_FIELD(arg0, u8 *, 2) << 0x10);
    M2C_FIELD(arg2, s32 *, 0x10) = temp_r1;
    M2C_FIELD(arg2, s32 *, 0xC)  = temp_r1;
    return arg0 + 3;
}
