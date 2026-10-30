#include "m2c.h"

void func_020b0850(s32 arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(((arg1 * 0x28) + arg0), s16 *, 0x11C) = arg2;
}
