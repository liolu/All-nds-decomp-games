#include "m2c.h"

s32 func_0201cd24(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 1) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 1) = 0U;
    return 1;
}
