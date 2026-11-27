#include "m2c.h"

s32 func_02012a7c(void *arg0) {
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + (M2C_FIELD(arg0, s32 *, 4) * 4)), s32 *, -4);
}
