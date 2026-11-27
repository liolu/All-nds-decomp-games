/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064740(void *, s32);                 /* extern */
s32 func_02064a28(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020757f4();                            /* extern */

s32 func_02075764(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02064a28(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020757f4();
    func_02064740(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
