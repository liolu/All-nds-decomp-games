#include "m2c.h"

M2C_UNK func_020427a4(void *, M2C_UNK, M2C_UNK);    /* extern */

void *func_0204277c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020427a4(arg0 + 8, 0, arg1);
    return arg0;
}
