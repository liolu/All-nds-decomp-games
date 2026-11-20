#include "m2c.h"

s32 func_02048334();                                /* extern */
M2C_UNK func_0205ea34(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0206e570(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_02048334() != 0) {
        return;
    }
    func_0205ea34(arg1, arg2, arg3);
}
