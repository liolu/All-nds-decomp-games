#include "m2c.h"

M2C_UNK func_02003e90();                            /* extern */
M2C_UNK func_02003eec(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0200402c();                            /* extern */

void func_020c999c(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    func_02003e90();
    func_02003eec(arg0, arg1 << 5, arg2);
    func_0200402c();
}
