#include "m2c.h"

s32 func_0204bfa8(void *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < 0x17)) {
        M2C_FIELD(arg0, s32 *, 0xA14) = arg1;
        return 1;
    }
    return 0;
}
