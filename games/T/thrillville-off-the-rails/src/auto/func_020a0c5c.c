#include "m2c.h"

void func_020a0c5c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x199) = (u8) ((M2C_FIELD(arg0, u8 *, 0x199) & ~1) | (arg1 & 1));
}
