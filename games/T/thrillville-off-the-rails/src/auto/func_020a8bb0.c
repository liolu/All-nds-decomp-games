#include "m2c.h"

void func_020a8bb0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x34A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x34A) & ~4) | ((u32) (arg1 << 0x1F) >> 0x1D));
}
