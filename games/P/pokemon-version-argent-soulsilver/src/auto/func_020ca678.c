#include "m2c.h"

M2C_UNK func_020d5374(s32, s32);                    /* extern */
M2C_UNK func_020d64d8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020d650c(M2C_UNK, M2C_UNK);                /* extern */

void func_020ca678(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_020d650c(arg2, arg3)) {
        func_020d64d8(arg2, arg3, 0);
    }
    func_020d5374(arg0, arg0 + arg1);
}
