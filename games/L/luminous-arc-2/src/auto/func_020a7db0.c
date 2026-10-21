#include "m2c.h"

s32 *func_020aa070(s32);                            /* extern */

s32 func_020a7db0(void *arg0) {
    return *func_020aa070(M2C_FIELD(arg0, s32 *, 4));
}
