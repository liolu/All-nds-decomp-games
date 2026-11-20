#include "m2c.h"

s32 func_02079a4c(s32 arg0, s32 arg1) {
    if (arg1 >= 3) {
        return 0;
    }
    return M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x484);
}
