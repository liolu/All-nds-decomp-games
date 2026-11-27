/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020e1a80(s32, s32, s32);               /* extern */
s32 func_020e1bd0(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_020e1e48(void *, s32);                 /* extern */

void func_020e1de8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200f270(0x30, 0);
    var_r4  = temp_r0;
    if (var_r4 != 0) {
        var_r4 = func_020e1bd0(temp_r0, arg1, arg2, arg3);
    }
    func_020e1a80(var_r4, M2C_FIELD(arg0, s32 *, 0x800), arg4);
    func_020e1e48(arg0, var_r4);
}
