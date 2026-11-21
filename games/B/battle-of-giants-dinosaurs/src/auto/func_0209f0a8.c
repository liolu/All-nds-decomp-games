#include "m2c.h"

s32 func_0209f0a8(void *arg0, s32 arg1, u32 arg2) {
    if (arg2 > (u32) M2C_FIELD(arg0, u32 *, 0x1C)) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32(**)(), 8)(arg0, arg1);
}
