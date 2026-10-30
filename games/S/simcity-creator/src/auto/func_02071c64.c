#include "m2c.h"

u16 func_02071c64(s32 arg0, s32 arg1, s32 arg2) {
    return M2C_FIELD((arg0 + (arg1 << 8) + (arg2 * 2)), u16 *, 0x340A8);
}
