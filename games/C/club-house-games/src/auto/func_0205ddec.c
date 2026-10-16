#include "m2c.h"

s32 func_0205ddb8();

void func_0205ddec(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, volatile s32 *, 0)   = func_0205ddb8();
    M2C_FIELD(arg0, volatile s32 *, 4)   = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 8)   = 0;
}
