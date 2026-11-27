#include "m2c.h"

s32 func_020a5e24(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0x104);
}
