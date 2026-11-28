#include "m2c.h"

void func_020c70d0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xAC) & ~0x20) | ((u32) (arg1 << 0x1F) >> 0x1A));
}
