/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202817c(M2C_UNK, M2C_UNK);                /* extern */
void *func_0203d1b0();                              /* extern */

s32 func_020c30ac(void) {
    s32 temp_r4;

    temp_r4 = func_0202817c(2, -1);
    if (temp_r4 < (s32) (M2C_FIELD(func_0203d1b0(), s32 *, 0x20) - 0x10000)) {
        return 1;
    }
    return 0;
}
