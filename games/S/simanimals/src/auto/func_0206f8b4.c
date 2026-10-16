#include "m2c.h"

s32 func_0206f880();

void func_0206f8b4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, volatile s32 *, 0)   = func_0206f880();
    M2C_FIELD(arg0, volatile s32 *, 4)   = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 8)   = 0;
}
