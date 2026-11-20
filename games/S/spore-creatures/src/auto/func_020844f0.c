#include "m2c.h"

s32 func_02084518();                                /* extern */

void func_020844f0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = func_02084518();
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
