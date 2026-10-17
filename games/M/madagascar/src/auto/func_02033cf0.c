#include "engine.h"
#include "m2c.h"

void func_02033cf0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s16 *, 0x16C) = (s16) arg1;
    M2C_FIELD(arg0, s16 *, 0x16E) = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x170) = (s16) (u8) arg3;
    M2C_FIELD(arg0, s16 *, 0x172) = (s16) (u8) arg4;
}
