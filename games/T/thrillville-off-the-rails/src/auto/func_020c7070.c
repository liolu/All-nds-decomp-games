#include "m2c.h"

void func_020c7070(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA4) & ~0x80000) | ((u32) (arg1 << 0x1F) >> 0xC));
}
