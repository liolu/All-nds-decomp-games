#include "m2c.h"

M2C_UNK func_02000eac(void *, s32);                 /* extern */
s32 func_02001878(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02004904();                            /* extern */

s32 func_02004948(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02001878(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02004904();
    func_02000eac(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
