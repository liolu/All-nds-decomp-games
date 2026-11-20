#include "m2c.h"

M2C_UNK func_02000e90(s32, void *);                 /* extern */

void func_020440fc(void *arg0) {
    func_02000e90(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, arg0 + 0x2C0);
}
