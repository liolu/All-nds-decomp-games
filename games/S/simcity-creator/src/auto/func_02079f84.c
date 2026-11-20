#include "m2c.h"

void func_02079f84(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg1 < 0x13) && (arg2 < 4)) {
        M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x2500) = arg2;
    }
}
