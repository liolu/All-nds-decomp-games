#include "m2c.h"

s32 func_020be51c(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, u16 *, 0x30) * 8;
    }
    return 0;
}
