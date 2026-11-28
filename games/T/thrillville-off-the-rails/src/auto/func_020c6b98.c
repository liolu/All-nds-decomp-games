#include "m2c.h"

void func_020c6b98(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xAC) & ~1) | (arg1 & 1));
}
