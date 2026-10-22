/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0200e9cc(s32);                           /* extern */

s32 func_02008c50(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x280);
    if (temp_r1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x370);
    }
    return M2C_FIELD(func_0200e9cc(temp_r1), s32 *, 4);
}
