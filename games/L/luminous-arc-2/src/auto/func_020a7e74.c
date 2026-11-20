#include "m2c.h"

s32 func_020a9fc8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_020a7e74(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)     = func_020a9fc8(4, 0x64, 0);
    M2C_FIELD(arg0, s32 *, 0x7D8) = 0;
}
