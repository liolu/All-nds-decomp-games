#include "engine.h"
#include "m2c.h"

void func_020a2d48(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s16 *, 0x2E) = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x32) = (s16) arg3;
}
