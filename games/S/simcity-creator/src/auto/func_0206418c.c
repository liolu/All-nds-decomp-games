#include "m2c.h"

M2C_UNK func_02064efc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b442c(s32);                         /* extern */

void func_0206418c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020b442c(M2C_FIELD(arg0, s32 *, 0));
    func_02064efc(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
}
