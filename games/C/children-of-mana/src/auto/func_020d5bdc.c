#include "m2c.h"

s32 func_020d5bdc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x50) == M2C_FIELD(arg0, s32 *, 0x4C)) {
        return 1;
    }
    return 0;
}
