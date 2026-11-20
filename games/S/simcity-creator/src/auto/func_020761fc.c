#include "m2c.h"

void func_020761fc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xF0) & ~8) | ((u32) (arg1 << 0x1F) >> 0x1C));
}
