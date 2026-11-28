#include "m2c.h"

void func_020b0680(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x3B1) = (u8) ((M2C_FIELD(arg0, u8 *, 0x3B1) & ~0x10) | ((u32) (arg1 << 0x1F) >> 0x1B));
}
