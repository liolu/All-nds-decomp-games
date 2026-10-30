#include "m2c.h"

s32 func_0201ce1c();                                /* extern */
M2C_UNK func_0201cea4();                            /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */

void func_020533c8(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x3500);
    if (var_r0 != 0) {
        var_r0 = func_0201ce1c();
    }
    M2C_FIELD(arg0, s32 *, 0xBB40) = var_r0;
    func_0201cea4();
}
