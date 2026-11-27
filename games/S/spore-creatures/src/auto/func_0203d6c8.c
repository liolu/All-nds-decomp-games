#include "m2c.h"

s32 func_02072ad8(M2C_UNK);                         /* extern */

void func_0203d6c8(s32 arg0, M2C_UNK arg1) {
    M2C_FIELD((arg0 + (func_02072ad8(arg1) * 0x10)), s8 *, 0xE) = 1;
}
