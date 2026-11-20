#include "m2c.h"

s32 func_02045060(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 1) {
        return 1;
    }
    return 0;
}
