#include "engine.h"
#include "m2c.h"

void func_020849d0(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg0;
    M2C_FIELD(arg0, s32 *, 0) = arg0;
}
