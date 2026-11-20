#include "m2c.h"

M2C_UNK func_020206f8(s32);                         /* extern */
s32 func_0202074c(M2C_UNK, s32);                    /* extern */

s32 func_020206bc(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_0202074c(arg0, 0x50434D50);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_020206f8(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
