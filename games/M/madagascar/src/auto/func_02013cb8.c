/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02013cb8(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, s32 *, 4) == 3) && (M2C_FIELD(arg1, s32 *, 0xC) == M2C_FIELD(arg0, s32 *, 0x1E0))) {
        if (M2C_FIELD(arg0, u8 *, 0x1EC) == 0) {
            M2C_FIELD(arg0, u8 *, 0x1EC) = 1U;
        }
        return 1;
    }
    return 0;
}
