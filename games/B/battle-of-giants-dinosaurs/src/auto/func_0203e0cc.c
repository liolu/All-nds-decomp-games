#include "m2c.h"

void func_0203e0cc(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    *M2C_FIELD(arg0, s8 **, 0)   = arg1;
    *M2C_FIELD(arg0, s32 **, 4)  = arg2;
}
