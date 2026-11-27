#include "m2c.h"

u32 func_020cdb7c(M2C_UNK);                         /* extern */

void func_02095460(void *arg0, s32 arg1, M2C_UNK arg2) {
    u32 var_r0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_r0                    = func_020cdb7c(arg2);
    if (var_r0 > 0xFFU) {
        var_r0 = 0xFF;
    } else if (var_r0 < 8U) {
        var_r0 = 8;
    }
    M2C_FIELD(arg0, s8 *, 4) = (s8) var_r0;
}
