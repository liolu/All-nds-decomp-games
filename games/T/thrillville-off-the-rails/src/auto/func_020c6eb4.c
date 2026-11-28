#include "m2c.h"

void func_020c6eb4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xA0) & ~0xFFF) | (arg1 & (-0x1000U >> 0x14)));
}
