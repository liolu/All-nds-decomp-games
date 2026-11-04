#include "m2c.h"

s32 func_ov100_0214639c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14C) == 2) {
        return 1;
    }
    return 0;
}
