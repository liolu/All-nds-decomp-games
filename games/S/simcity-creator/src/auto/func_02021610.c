#include "m2c.h"

void func_02021610(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) (M2C_FIELD(arg0, u8 *, 0x3C) | arg1);
}
