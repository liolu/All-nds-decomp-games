#include "m2c.h"

s32 func_020d7d24(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x70) == 0x29) {
        return 1;
    }
    return 0;
}
