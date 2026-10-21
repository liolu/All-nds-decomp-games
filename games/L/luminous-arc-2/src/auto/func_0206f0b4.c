#include "m2c.h"

s32 func_0206f240(s32);                             /* extern */

void func_0206f0b4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = func_0206f240(arg1);
}
