#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020b8850();                                /* extern */

void *func_020b89ac(void *arg0) {
    s32 var_r0;

    func_02006ee8(arg0, 0, 0x14);
    var_r0 = func_020348ec(0x19C);
    if (var_r0 != 0) {
        var_r0 = func_020b8850();
    }
    M2C_FIELD(arg0, s32 *, 0)    = var_r0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
