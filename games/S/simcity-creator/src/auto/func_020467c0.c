#include "m2c.h"

void func_020467c0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD((arg0 + (arg1 * 8) + (arg3 * 4)), s32 *, 0xAE80) = arg2;
}
