#include "m2c.h"

void func_020159dc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg1, s16 *, 0) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg1, s16 *, 2) << 0xC);
}
