#include "m2c.h"

M2C_UNK func_02028d7c(void *, s32);                 /* extern */
s32 func_020291b4(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020322ec();                            /* extern */

s32 func_02032330(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020291b4(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020322ec();
    func_02028d7c(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
