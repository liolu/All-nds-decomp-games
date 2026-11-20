#include "m2c.h"

s32 func_02046990(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0x63) {
        return 1;
    }
    return 0;
}
