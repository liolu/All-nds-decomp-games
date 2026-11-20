#include "m2c.h"

void func_02061a1c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1428) = arg1;
    M2C_FIELD(arg0, s32 *, 0x142C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1420) = 1;
}
