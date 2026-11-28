#include "m2c.h"

s32 *func_0205fa34(void *, s32);                    /* extern */

void func_0205f734(void *arg0, s32 arg1, s16 arg2) {
    *func_0205fa34(arg0 + 4, M2C_FIELD(arg0, s32 *, 0x10))                     = arg1;
    M2C_FIELD(func_0205fa34(arg0 + 4, M2C_FIELD(arg0, s32 *, 0x10)), s16 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10)                                               = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
}
