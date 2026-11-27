#include "m2c.h"

s32 func_02078378(void *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x1A8) + M2C_FIELD(arg0, s32 *, 0x14)), s32 *, 4);
}
