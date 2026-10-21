#include "m2c.h"

M2C_UNK func_020538f8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02053a28(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02053b54();                                /* extern */

void func_02053dcc(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        func_020538f8(func_02053b54(), arg2, arg3);
        return;
    }
    func_02053a28(arg0, arg2, arg3);
}
