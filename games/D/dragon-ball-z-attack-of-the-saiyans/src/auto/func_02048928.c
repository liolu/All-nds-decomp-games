#include "m2c.h"

M2C_UNK func_0200c3fc(s32);                         /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020130cc(M2C_UNK);                         /* extern */

s32 func_02048928(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = func_02012a90(arg0, 1);
    if ((u32) ((var_r4 & 0xFFF) - 0x1F4) <= 1U) {
        var_r4 += func_020130cc(0xA);
    }
    func_0200c3fc(var_r4);
    return 1;
}
