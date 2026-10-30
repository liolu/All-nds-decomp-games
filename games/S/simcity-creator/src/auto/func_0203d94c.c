#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_02095250();                                /* extern */
M2C_UNK func_0209542c(s32, M2C_UNK);                /* extern */

void func_0203d94c(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x63C);
    if (var_r0 != 0) {
        var_r0 = func_02095250();
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = var_r0;
    func_0209542c(var_r0, 0);
    *(s32 *) 0x04001000 &= 0xFFCFFFEF;
}
