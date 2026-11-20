/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0200e9cc(s32);                           /* extern */

void func_02008c0c(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x280);
    var_r4  = arg1;
    if (temp_r2 != 0) {
        if (var_r4 <= 0) {
            var_r4 = 0;
        }
        M2C_FIELD(func_0200e9cc(temp_r2), s32 *, 4) = var_r4;
        return;
    }
    if (var_r4 <= 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x370) = var_r4;
}
