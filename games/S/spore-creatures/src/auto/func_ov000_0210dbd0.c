#include "m2c.h"

M2C_UNK func_0206202c(s32);                         /* extern */

void func_ov000_0210dbd0(void *arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r2 = M2C_FIELD(arg0, s32 *, 0x54);
    if (var_r2 != 0) {
        var_r2 -= 0x4;
    }
    if (var_r2 == 0) {
        return;
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 0x54);
    if (var_r0 != 0) {
        var_r0 -= 0x4;
    }
    func_0206202c(var_r0);
}
