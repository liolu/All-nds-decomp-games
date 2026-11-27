/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bb88(s32, M2C_UNK);                /* extern */
s32 func_02060d2c();                                /* extern */
s32 func_02060db4(M2C_UNK, M2C_UNK, u32, s32);      /* extern */
M2C_UNK func_02060f08(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020630f8(M2C_UNK arg0, u32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02060d2c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 > 3U) {
        return 6;
    }
    if (arg1 != 0) {
        if (arg2 == 0) {
            return 6;
        }
        func_0205bb88(arg2, 0x50);
        goto block_8;
    }
block_8:
    func_02060f08(0x14, arg0);
    var_r0 = func_02060db4(0x14, 2, arg1, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
