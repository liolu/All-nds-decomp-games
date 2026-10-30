#include "m2c.h"

void func_02090d6c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    *(s32 *) 0x0400101C          = (M2C_FIELD(arg0, s32 *, 0x48) & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
