#include "m2c.h"

void func_0205b41c(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *) 0x040004A4 = (M2C_FIELD(arg0, u8 *, 0x7D) * 0x10) | 0xC0 | (arg2 << 0x18) | (arg1 << 0x10);
}
