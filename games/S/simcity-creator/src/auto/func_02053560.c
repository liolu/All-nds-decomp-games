#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020b4c18();                                /* extern */
M2C_UNK func_020b4c40(s32, s32);                    /* extern */

void func_02053560(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x24);
    if (var_r0 != 0) {
        var_r0 = func_020b4c18();
    }
    M2C_FIELD(arg0, s32 *, 0xBB6C) = var_r0;
    func_020b4c40(var_r0, M2C_FIELD(arg0, s32 *, 0xBB50));
}
