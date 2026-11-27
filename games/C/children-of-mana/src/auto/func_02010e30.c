#include "m2c.h"

M2C_UNK func_02010be4(M2C_UNK, s32, s32, M2C_UNK);  /* extern */

void func_02010e30(M2C_UNK arg0, void *arg1) {
    func_02010be4(arg0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4) + M2C_FIELD(arg1, s32 *, 8), 0);
}
