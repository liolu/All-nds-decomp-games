#include "engine.h"
#include "m2c.h"

void func_020a2d58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) arg3;
}
