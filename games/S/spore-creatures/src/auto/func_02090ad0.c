#include "m2c.h"

void func_02090ad0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
