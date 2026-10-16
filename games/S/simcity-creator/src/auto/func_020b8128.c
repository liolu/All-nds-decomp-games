#include "engine.h"
#include "m2c.h"

void func_020b8128(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0xA28) = (s8) arg1;
}
