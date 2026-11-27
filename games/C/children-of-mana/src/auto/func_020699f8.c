/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02069ce0();                                /* extern */
M2C_UNK func_02069d0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02069de0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020699f8(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        func_02069de0(func_02069ce0(), arg2, arg3);
        return;
    }
    func_02069d0c(arg0, arg2, arg3);
}
