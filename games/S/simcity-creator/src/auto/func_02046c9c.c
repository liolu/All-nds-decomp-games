#include "m2c.h"

void func_02046c9c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, u16 *, 0xBA0A) = (u16) (M2C_FIELD(arg0, u16 *, 0xBA0A) | (1 << (arg2 + ((arg1 - 1) * 2))));
}
