#include "m2c.h"

M2C_UNK func_02006f7c(M2C_UNK, void *, s32);        /* extern */

void func_020aa828(s32 arg0, void *arg1, M2C_UNK arg2) {
    func_02006f7c(arg2, arg1, 0x5B8);
    M2C_FIELD(arg1, s8 *, 0x49B) = 1;
}
