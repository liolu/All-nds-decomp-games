#include "m2c.h"

void func_020a8b50(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x349) = (u8) ((M2C_FIELD(arg0, u8 *, 0x349) & ~0x40) | ((u32) (arg1 << 0x1F) >> 0x19));
}
