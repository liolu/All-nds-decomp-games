#include "m2c.h"

s32 func_02064fb0(void *arg0, u32 arg1) {
    if (arg1 < (u32) M2C_FIELD(arg0, u16 *, 0)) {
        return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 8);
    }
    return 0;
}
