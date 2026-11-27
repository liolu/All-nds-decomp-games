/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209fff0(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x38) == 4) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32(**)(), 0x10)(arg0, arg1, arg2);
}
