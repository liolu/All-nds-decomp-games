#include "m2c.h"

s32 func_02090e10(s16, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

void *func_0203e524(void *arg0, s16 arg1) {
    s32 var_r0;

    if (arg1 == 0xFFFF) {
        var_r0 = 0;
    } else {
        var_r0 = func_02090e10(arg1, 1, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    return arg0;
}
