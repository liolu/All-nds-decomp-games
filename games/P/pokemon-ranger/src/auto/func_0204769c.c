/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204769c(void *arg0, s32 arg1, void *arg2) {
    if ((arg2 != NULL) && (M2C_FIELD(arg2, u8 *, 0x1A2B) != 0)) {
        return 0xE100D;
    }
    return M2C_FIELD(((arg1 * 0x5C) + M2C_FIELD(arg0, s32 *, 0x6F38)), s32 *, 0x2C);
}
