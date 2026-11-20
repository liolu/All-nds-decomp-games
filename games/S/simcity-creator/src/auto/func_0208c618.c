/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208c618(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x60E8);
    if (temp_r3 < 0) {
        *arg1 = -1;
        *arg2 = -1;
        return 0;
    }
    *arg1 = temp_r3;
    *arg2 = M2C_FIELD(arg0, s32 *, 0x60EC);
    return 1;
}
