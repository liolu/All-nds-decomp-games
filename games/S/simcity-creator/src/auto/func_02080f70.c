#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_0208c750();                                /* extern */
M2C_UNK func_0208c790(s32, s32);                    /* extern */

void func_02080f70(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_r0                    = func_020348ec(0x50);
    if (var_r0 != 0) {
        var_r0 = func_0208c750();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    func_0208c790(var_r0, arg1);
}
