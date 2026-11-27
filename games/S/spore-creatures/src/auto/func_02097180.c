#include "m2c.h"

void func_02097180(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((M2C_FIELD(arg0, s32 *, 0x28) & ~0x20000000) | ((u32) (arg1 << 0x1F) >> 2));
}
