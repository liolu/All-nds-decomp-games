#include "m2c.h"

M2C_UNK func_02000e90(s32, void *);                 /* extern */

void func_020440e4(void *arg0) {
    func_02000e90(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, arg0 + 0x2CC);
}
