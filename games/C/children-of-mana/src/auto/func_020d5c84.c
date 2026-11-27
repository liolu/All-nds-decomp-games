/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020da5d0(s32);                             /* extern */

s32 func_020d5c84(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x64);
    }
    return func_020da5d0(temp_r1);
}
