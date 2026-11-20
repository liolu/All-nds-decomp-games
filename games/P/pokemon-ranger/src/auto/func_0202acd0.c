#include "m2c.h"

void func_0202acd0(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0)   = (s32) (M2C_FIELD(arg0, s16 *, 6) * 0x10);
    M2C_FIELD(arg1, s32 *, 4)   = (s32) (M2C_FIELD(arg0, s16 *, 0xE) * 0x10);
    M2C_FIELD(arg1, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s16 *, 0x16) * 0x10);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s16 *, 0x1E) * 0x10);
}
