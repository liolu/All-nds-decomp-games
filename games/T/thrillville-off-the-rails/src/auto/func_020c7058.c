#include "m2c.h"

void func_020c7058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xAC) & ~0xC) | ((u32) (arg1 << 0x1E) >> 0x1C));
}
