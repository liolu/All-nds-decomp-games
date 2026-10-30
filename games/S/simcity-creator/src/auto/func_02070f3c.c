#include "m2c.h"

s32 func_02070f3c(s32 arg0, s32 arg1, s32 arg2) {
    return M2C_FIELD((arg0 + (arg1 << 9) + (arg2 * 4)), s32 *, 0x3C0C0);
}
