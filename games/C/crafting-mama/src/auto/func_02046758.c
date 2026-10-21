#include "m2c.h"

s32 func_02046758(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    }
    return 1;
}
