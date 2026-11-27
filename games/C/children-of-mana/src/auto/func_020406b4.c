/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02040718(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02064c5c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02066d14(M2C_UNK, s32);                /* extern */

void func_020406b4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r4;

    temp_r4 = func_02064c5c(arg4, 0);
    func_02040718(arg0, arg1, arg2, arg3, arg5, arg6);
    func_02066d14(arg0, temp_r4);
}
