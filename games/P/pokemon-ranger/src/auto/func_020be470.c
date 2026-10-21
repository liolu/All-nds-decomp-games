/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc2a4(void *, s32);                 /* extern */
s32 func_020bc58c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020be500();                            /* extern */

s32 func_020be470(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020bc58c(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020be500();
    func_020bc2a4(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
