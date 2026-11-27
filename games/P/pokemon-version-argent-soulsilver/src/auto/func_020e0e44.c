#include "m2c.h"

M2C_UNK func_020de4c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de538(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_020de680();                                /* extern */

s32 func_020e0e44(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020de680();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    func_020de4c8(0x19, arg0);
    var_r0 = func_020de538(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
