#include "m2c.h"

s32 func_020707bc();                                /* extern */

s32 func_0206fd5c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
        return -0x40;
    }
    return func_020707bc();
}
