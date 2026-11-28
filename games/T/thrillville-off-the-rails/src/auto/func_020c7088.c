#include "m2c.h"

void func_020c7088(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA8) & 0xFFFF8007) | ((u32) (arg1 << 0x14) >> 0x11));
}
