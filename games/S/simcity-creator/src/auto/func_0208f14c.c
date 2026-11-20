#include "m2c.h"

s32 func_020198f8(M2C_UNK);                         /* extern */

void func_0208f14c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = func_020198f8(arg1);
}
