#include "m2c.h"

M2C_UNK func_020b4bac(void *, s32);                 /* extern */
s32 func_020b5738(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020c9d0c();                            /* extern */

s32 func_020c9d50(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020b5738(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020c9d0c();
    func_020b4bac(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
