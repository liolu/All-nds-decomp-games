#include "m2c.h"

void func_020cda24(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = 3;
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) (arg1 << 0xC);
    M2C_FIELD(arg0, s32 *, 0x7C) = arg2;
}
