#include "m2c.h"

M2C_UNK func_0204e610(s32);                         /* extern */
s32 func_0204e89c(M2C_UNK, s32);                    /* extern */

s32 func_0204e5ac(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_0204e89c(arg0, 0x4345424B);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_0204e610(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
