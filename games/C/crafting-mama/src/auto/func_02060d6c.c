#include "m2c.h"

s32 func_02029924();                                /* extern */
s32 func_02060f58(M2C_UNK);                         /* extern */

s16 func_02060d6c(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_02029924();
    var_r0  = func_02060f58(arg0);
    if (var_r0 >= 0x28) {
        var_r0 = 0;
    }
    return M2C_FIELD((temp_r4 + (var_r0 * 2)), s16 *, 0xC0);
}
