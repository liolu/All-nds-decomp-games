/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_020e33ec(s32);                         /* extern */
s32 func_020e3418(s32, M2C_UNK);                    /* extern */

s32 func_020b8f50(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x244);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_020e33ec(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0x244) = 0;
    }
    var_r0 = func_0200f270(8, 0);
    if (var_r0 != 0) {
        var_r0 = func_020e3418(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x244) = var_r0;
    return M2C_FIELD(arg0, s32 *, 0x244);
}
