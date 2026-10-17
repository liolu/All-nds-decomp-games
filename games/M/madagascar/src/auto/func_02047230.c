#include "m2c.h"

M2C_UNK func_02000e58(s32, s32);                    /* extern */

void func_02047230(void *arg0, void *arg1) {
    func_02000e58(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, M2C_FIELD(arg1, s32 *, 4));
}
