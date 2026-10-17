#include "m2c.h"

void func_02029808(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1                         = M2C_FIELD(arg0, s32 *, 0x574);
    *arg2                         = M2C_FIELD(arg0, s32 *, 0x580);
    M2C_FIELD(arg0, s8 *, 0x57C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x598) = 1;
}
