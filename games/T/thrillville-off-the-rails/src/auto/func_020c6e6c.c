#include "m2c.h"

void func_020c6e6c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA4) & ~0x3F000) | ((u32) (arg1 << 0x1A) >> 0xE));
}
