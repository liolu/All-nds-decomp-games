/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02056830(void *arg0, u16 *arg1, u16 *arg2) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x1A);
    if ((u32) temp_r3 < 0x80U) {
        *arg1 = temp_r3;
        *arg2 = M2C_FIELD(arg0, u16 *, 0x1C);
        return 1;
    }
    return 0;
}
