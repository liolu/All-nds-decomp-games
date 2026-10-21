#include "m2c.h"

s32 func_020ab758(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) != M2C_FIELD(arg1, s32 *, 8)) {
        return 1;
    }
    return 0;
}
