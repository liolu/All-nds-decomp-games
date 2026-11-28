#include "m2c.h"

void func_020c6fc4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xAC) & ~0x10) | ((u32) (arg1 << 0x1F) >> 0x1B));
}
