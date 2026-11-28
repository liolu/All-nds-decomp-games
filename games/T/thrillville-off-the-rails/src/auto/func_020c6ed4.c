#include "m2c.h"

void func_020c6ed4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA0) & 0xFF000FFF) | ((u32) (arg1 << 0x14) >> 8));
}
