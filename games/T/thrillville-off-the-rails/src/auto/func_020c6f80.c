#include "m2c.h"

void func_020c6f80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA4) & ~0x01800000) | ((u32) (arg1 << 0x1E) >> 7));
}
