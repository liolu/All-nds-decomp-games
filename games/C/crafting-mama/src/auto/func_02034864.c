#include "m2c.h"

s32 func_02034864(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x3C) & 4) {
        return 1;
    }
    return 0;
}
