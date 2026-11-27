#include "m2c.h"

s32 func_0202ec3c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x1E) != 0xFFFF) {
        return 1;
    }
    return 0;
}
