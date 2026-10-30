#include "m2c.h"

s32 func_020b3db4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x5C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        return 1;
    }
    return 0;
}
