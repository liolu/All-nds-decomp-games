#include "m2c.h"

void func_02057564(void *arg0, s8 arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s8 *, 0x39) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3A) = arg1;
}
