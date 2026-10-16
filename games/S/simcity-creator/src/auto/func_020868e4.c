#include "engine.h"
#include "m2c.h"

void func_020868e4(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}
