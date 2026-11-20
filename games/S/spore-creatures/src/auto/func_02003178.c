#include "engine.h"
#include "m2c.h"

void func_02003178(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 16);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 20);
}
