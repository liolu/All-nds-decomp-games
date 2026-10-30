#include "m2c.h"

void func_020b0840(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0x28) + arg0), s32 *, 0x120) = arg2;
}
