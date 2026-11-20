#include "engine.h"
#include "m2c.h"

void func_020206f8(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg0);
}
