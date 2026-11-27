#include "m2c.h"

M2C_UNK func_02061ffc(s32);                         /* extern */

void func_02045a84(void *arg0) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x178);
    var_r1 = var_r0;
    if (var_r0 != 0) {
        var_r1 = var_r0 - 4;
    }
    if (var_r1 == 0) {
        return;
    }
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    func_02061ffc(var_r0);
}
