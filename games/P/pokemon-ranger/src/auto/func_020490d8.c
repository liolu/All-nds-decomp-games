#include "m2c.h"

s32 func_020490d8(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x1AEC) - 9) <= 5U) {
        return 1;
    }
    return 0;
}
