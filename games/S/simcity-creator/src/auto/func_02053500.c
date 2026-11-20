#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020af848();                                /* extern */
M2C_UNK func_020af878();                            /* extern */

void func_02053500(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x38);
    if (var_r0 != 0) {
        var_r0 = func_020af848();
    }
    M2C_FIELD(arg0, s32 *, 0xBB68) = var_r0;
    func_020af878();
}
