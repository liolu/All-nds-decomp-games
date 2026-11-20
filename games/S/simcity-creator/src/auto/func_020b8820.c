#include "engine.h"
#include "m2c.h"

void func_020b8820(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0xB36) = (s8) arg1;
}
