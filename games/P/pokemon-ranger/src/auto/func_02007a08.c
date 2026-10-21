#include "m2c.h"

s32 func_02007a08(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48C) == 2) {
        return M2C_FIELD(arg0, s32 *, 0x560);
    }
    return -1;
}
