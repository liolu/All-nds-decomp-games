#include "m2c.h"

M2C_UNK func_02057360(s32, M2C_UNK);                /* extern */
s32 func_020565ec(M2C_UNK);                         /* extern */

void func_0205733c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020565ec(4);
    if (temp_r0 == 0) {
        return;
    }
    func_02057360(temp_r0, arg2);
}
