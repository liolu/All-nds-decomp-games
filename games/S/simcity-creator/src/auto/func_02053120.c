#include "m2c.h"

s32 func_0201c5cc();                                /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020b1018();                                /* extern */
M2C_UNK func_020b1054();                            /* extern */

void func_02053120(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    var_r0 = func_020348ec(0x44);
    if (var_r0 != 0) {
        var_r0 = func_020b1018();
    }
    M2C_FIELD(arg0, s32 *, 0xBB58) = var_r0;
    func_020b1054();
    var_r0_2 = func_020348ec(8);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0201c5cc();
    }
    M2C_FIELD(arg0, s32 *, 0xBB5C) = var_r0_2;
}
