#include "m2c.h"

s32 func_ov002_020b8270(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3F0) == 2) {
        return 0;
    }
    return 4;
}
