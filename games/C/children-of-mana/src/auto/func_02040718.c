/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f21c(s32, M2C_UNK);                    /* extern */
s32 func_02066b40(s32, s32);                        /* extern */
M2C_UNK func_02066b7c(s32, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

s32 func_02040718(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 *arg4, s32 arg5) {
    *arg4 = func_0200f21c(func_02066b40(arg3, arg5), 0);
    func_02066b7c(arg0, *arg4, arg1, arg2, arg3, arg5);
    return arg0;
}
