#include "m2c.h"

s32 func_02009440(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3A4) == 6) {
        return 1;
    }
    return 0;
}
