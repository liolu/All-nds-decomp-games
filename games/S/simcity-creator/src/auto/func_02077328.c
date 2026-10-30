#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02082d6c();                                /* extern */
M2C_UNK func_02082e10(s32, s32);                    /* extern */

void func_02077328(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x60);
    if (var_r0 != 0) {
        var_r0 = func_02082d6c();
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = var_r0;
    func_02082e10(var_r0, M2C_FIELD(arg0, s32 *, 8));
}
