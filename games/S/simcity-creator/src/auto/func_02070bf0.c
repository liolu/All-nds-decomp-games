#include "m2c.h"

u16 func_02070bf0(s32 arg0, s32 arg1, s32 arg2) {
    return M2C_FIELD((arg0 + (arg1 << 8) + (arg2 * 2)), u16 *, 0x2009C);
}
