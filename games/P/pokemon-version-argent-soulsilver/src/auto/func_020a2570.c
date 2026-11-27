#include "m2c.h"

M2C_UNK func_020a6bc4();                            /* extern */

s32 func_020a2570(void *arg0) {
    s32 var_r1;
    s8 temp_r0;

    var_r1  = 1;
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x73);
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_020a6bc4();
    }
    return 0;
}
