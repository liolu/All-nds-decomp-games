#include "m2c.h"

s8 func_02073850(s32, M2C_UNK);                     /* extern */

void func_02020ed8(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s8 *, 0x342D9) = func_02073850(M2C_FIELD(arg0, s32 *, 0x34E8), 0);
}
