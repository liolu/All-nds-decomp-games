#include "m2c.h"

M2C_UNK func_020785c8(M2C_UNK, M2C_UNK, void *, s32); /* extern */

void func_020785ec(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    func_020785c8(arg0, 0x1000, arg1, arg1 + 8);
}
