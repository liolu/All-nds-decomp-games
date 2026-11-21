#include "m2c.h"

void func_0209c818(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0) = (u32) (arg1 >> 0x18);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0xFFF & (arg1 >> 0xC));
}
