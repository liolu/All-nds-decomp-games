#include "m2c.h"

M2C_UNK _Z15CleanCacheRangePKvj(s32, M2C_UNK);                /* extern */
M2C_UNK func_020de4c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de538(M2C_UNK, M2C_UNK, u32, s32);      /* extern */
s32 func_020de680();                                /* extern */

s32 func_020e0c9c(M2C_UNK arg0, u32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020de680();
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
        _Z15CleanCacheRangePKvj(arg2, 0x50);
        goto block_8;
    }
block_8:
    func_020de4c8(0x14, arg0);
    var_r0 = func_020de538(0x14, 2, arg1, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
