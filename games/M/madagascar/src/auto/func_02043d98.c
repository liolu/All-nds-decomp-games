#include "m2c.h"

s32 func_02043d98(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == M2C_FIELD(arg0, s32 *, 8)) {
        return 1;
    }
    return 0;
}
