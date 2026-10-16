#include "m2c.h"

M2C_UNK func_020b7e44(s32, s32);                    /* extern */
M2C_UNK func_020b8cdc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020b8d10(M2C_UNK, M2C_UNK);                /* extern */

void func_02089840(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_020b8d10(arg2, arg3)) {
        func_020b8cdc(arg2, arg3, 0);
    }
    func_020b7e44(arg0, arg0 + arg1);
}
