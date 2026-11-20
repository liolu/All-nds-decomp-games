#include "m2c.h"

s32 func_0206b7cc(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 2) {
        return 1;
    }
    return 0;
}
