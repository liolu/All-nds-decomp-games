#include "m2c.h"

M2C_UNK func_0204d910(void *, s32);                 /* extern */
s32 func_0204e2d0(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02058c50();                            /* extern */

s32 func_02058c94(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0204e2d0(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02058c50();
    func_0204d910(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
