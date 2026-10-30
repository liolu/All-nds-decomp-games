#include "m2c.h"

s32 func_0201cc04();                                /* extern */
M2C_UNK func_0201cc38();                            /* extern */
M2C_UNK func_0201cd40(s32, M2C_UNK);                /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */

void func_02053484(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0xC);
    if (var_r0 != 0) {
        var_r0 = func_0201cc04();
    }
    M2C_FIELD(arg0, s32 *, 0xBB64) = var_r0;
    func_0201cc38();
    func_0201cd40(M2C_FIELD(arg0, s32 *, 0xBB64), 0);
}
