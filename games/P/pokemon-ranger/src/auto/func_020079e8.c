#include "m2c.h"

s32 func_020079e8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48C) == 1) {
        return M2C_FIELD(arg0, s32 *, 0x554);
    }
    return (s32) M2C_FIELD(arg0, s16 *, 0x55A);
}
