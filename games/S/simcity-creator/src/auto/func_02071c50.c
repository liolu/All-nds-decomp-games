#include "m2c.h"

void func_02071c50(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    M2C_FIELD((arg0 + (arg1 << 8) + (arg2 * 2)), s16 *, 0x340A8) = arg3;
}
