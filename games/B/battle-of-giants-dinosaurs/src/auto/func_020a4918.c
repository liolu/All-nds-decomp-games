#include "m2c.h"

s32 func_020a4918(void *arg0, s32 arg1, s32 *arg2) {
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x10);
}
