#include "m2c.h"

void func_020c70a8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA8) & 0x80007FFF) | ((u32) (arg1 << 0x10) >> 1));
}
