#include "m2c.h"

M2C_UNK func_0200751c(s32, s32);                    /* extern */
M2C_UNK func_02008310(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02008344(M2C_UNK, M2C_UNK);                /* extern */

void func_02032bb0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_02008344(arg2, arg3)) {
        func_02008310(arg2, arg3, 0);
    }
    func_0200751c(arg0, arg0 + arg1);
}
