#include "m2c.h"

s32 func_020105f4(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if ((M2C_FIELD(arg0, s8 *, 0) == 0x53) && (M2C_FIELD(arg0, s8 *, 1) == 0x42) && (M2C_FIELD(arg0, s8 *, 2) == 0x20) &&
        (M2C_FIELD(arg0, s8 *, 3) == 0x20)) {
        return 1;
    }
    return 0;
}
