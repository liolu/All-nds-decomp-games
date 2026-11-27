/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020aecc0(void *arg0, s16 arg1, s16 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0xD8) == 0) {
        M2C_FIELD(arg0, s16 *, 0x1CC) = arg1;
        M2C_FIELD(arg0, s16 *, 0x1CE) = arg2;
        return 1;
    }
    return 0;
}
