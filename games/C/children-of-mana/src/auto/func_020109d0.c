/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020109d0(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) &&
        (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
        return 1;
    }
    return 0;
}
