#include "m2c.h"

M2C_UNK func_020de4c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de538(M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
void *func_020de654();                              /* extern */
s32 func_020de6c8(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020df2d4(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020de6c8(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020de4c8(3, arg0);
    temp_r0_2 = func_020de654();
    var_r0    = func_020de538(3, 4, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4),
                              M2C_FIELD(temp_r0_2, s32 *, 0x10), arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
