#include "m2c.h"

s32 func_01ffbfac(s32, s32, M2C_UNK);               /* extern */

void func_02077c7c(void *arg0, void *arg1, void *arg2, M2C_UNK arg3) {
    M2C_FIELD(arg2, s32 *, 0) = func_01ffbfac(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, s32 *, 0), arg3);
    M2C_FIELD(arg2, s32 *, 4) = func_01ffbfac(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4), arg3);
    M2C_FIELD(arg2, s32 *, 8) = func_01ffbfac(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 8), arg3);
}
