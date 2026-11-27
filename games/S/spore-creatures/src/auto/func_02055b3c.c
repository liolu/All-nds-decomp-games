#include "m2c.h"

void func_02055b3c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) ((M2C_FIELD(arg0, u16 *, 0x2A) & ~8) | ((u32) (arg1 << 0x1F) >> 0x1C));
}
