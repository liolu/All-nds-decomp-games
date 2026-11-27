#include "m2c.h"

s32 func_02072ad8(M2C_UNK);                         /* extern */

u8 func_0203d5e4(s32 arg0, M2C_UNK arg1) {
    return M2C_FIELD((arg0 + (func_02072ad8(arg1) * 0x10)), u8 *, 0xC);
}
