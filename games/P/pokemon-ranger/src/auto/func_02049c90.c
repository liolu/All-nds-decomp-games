#include "m2c.h"

s32 func_02049c90(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1AEC) == 0x1D) {
        return 1;
    }
    return 0;
}
