/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02062bf4(void *, s32);                 /* extern */
s32 func_020635b4(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02064fac();                            /* extern */

s32 func_02064f1c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020635b4(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02064fac();
    func_02062bf4(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
