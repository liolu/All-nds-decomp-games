#include "m2c.h"

s32 func_02053754(s32 arg0, void *arg1, s8 arg2) {
    if (M2C_FIELD(arg1, s32 *, 0x50) != 0) {
        return 0;
    }
    M2C_FIELD(arg1, s8 *, 0x54) = arg2;
    return arg0;
}
