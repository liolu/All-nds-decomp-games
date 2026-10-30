#include "m2c.h"

s32 func_020467fc(s32 arg0, s32 arg1, s32 arg2) {
    return M2C_FIELD((arg0 + (arg1 * 8) + (arg2 * 4)), s32 *, 0xAEC0);
}
