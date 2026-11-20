#include "m2c.h"

s32 func_020079d4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48C) == 1) {
        return 1;
    }
    return 2;
}
