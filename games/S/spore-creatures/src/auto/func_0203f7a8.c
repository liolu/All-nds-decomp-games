#include "m2c.h"

s32 func_02040ff4(void *);                          /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
s32 func_0209b734(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_0209b7b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209b884(s32, M2C_UNK);                /* extern */

s32 func_0203f7a8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_r0 == 0) {
        var_r4 = func_02093480(0x10);
        if (var_r4 != 0) {
            var_r4 = func_0209b734(var_r4, func_02040ff4(arg0), arg2, arg1);
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r4;
        func_0209b884(var_r4, 1);
    } else {
        func_0209b7b0(temp_r0, arg2, arg1);
    }
    return M2C_FIELD(arg0, s32 *, 0xC0);
}
