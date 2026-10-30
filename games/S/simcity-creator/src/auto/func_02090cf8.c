#include "m2c.h"

void func_02090cf8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    *(s32 *) 0x04001014          = (M2C_FIELD(arg0, s32 *, 0x38) & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
