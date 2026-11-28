#include "m2c.h"

u32 func_020c1d74(s32 arg0, s8 *arg1, u32 arg2) {
    *arg1 = 1 << (arg2 & 7);
    return arg2 >> 3;
}
