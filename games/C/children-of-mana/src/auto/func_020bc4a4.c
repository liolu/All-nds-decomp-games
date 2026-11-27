#include "m2c.h"

s32 func_020bc4a4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        return 1;
    }
    M2C_FIELD(arg0, u8 *, 0xC) = 1U;
    return 1;
}
