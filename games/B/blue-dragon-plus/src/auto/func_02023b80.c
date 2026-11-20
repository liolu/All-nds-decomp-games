#include "m2c.h"

M2C_UNK func_020236c8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020237f8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02023908();                                /* extern */

void func_02023b80(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        func_020236c8(func_02023908(), arg2, arg3);
        return;
    }
    func_020237f8(arg0, arg2, arg3);
}
