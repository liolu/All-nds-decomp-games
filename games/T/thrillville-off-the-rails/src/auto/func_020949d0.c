#include "m2c.h"

void func_020949d0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((M2C_FIELD(arg0, s32 *, 0x5C) & ~2) | ((u32) (arg1 << 0x1F) >> 0x1E));
}
