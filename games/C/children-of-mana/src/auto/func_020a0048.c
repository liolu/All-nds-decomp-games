/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a0048(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x38) == 3) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32(**)(), 0xC)(arg0, arg1, arg2);
}
