#include "m2c.h"

M2C_UNK func_020b7014(s32);                         /* extern */
s32 func_020b720c(M2C_UNK, s32);                    /* extern */

s32 func_020b6fc8(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_020b720c(arg0, 0x4D43424B);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_020b7014(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
