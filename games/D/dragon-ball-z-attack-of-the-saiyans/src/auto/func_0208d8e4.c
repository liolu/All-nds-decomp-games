#include "m2c.h"

M2C_UNK func_0208631c(s32, s32);                    /* extern */
M2C_UNK func_020870f8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0208712c(M2C_UNK, M2C_UNK);                /* extern */

void func_0208d8e4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0208712c(arg2, arg3)) {
        func_020870f8(arg2, arg3, 0);
    }
    func_0208631c(arg0, arg0 + arg1);
}
