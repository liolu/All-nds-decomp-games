#include "m2c.h"

s32 func_020348a4(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x3C) & 8) {
        return 1;
    }
    return 0;
}
