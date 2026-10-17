#include "m2c.h"

s32 func_02033f0c(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x174) < (s32) M2C_FIELD(arg0, s32 *, 0x174)) {
        return 2;
    }
    return 1;
}
