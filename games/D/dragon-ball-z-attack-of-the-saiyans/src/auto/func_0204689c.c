#include "m2c.h"

s32 func_02012a90(s32, M2C_UNK);                    /* extern */

s32 func_0204689c(s32 arg0) {
    return M2C_FIELD((arg0 + (func_02012a90(arg0, 1) * 4)), s32 *, 0x28);
}
