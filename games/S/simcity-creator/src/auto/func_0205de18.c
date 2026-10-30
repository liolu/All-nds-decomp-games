#include "m2c.h"

s32 func_0205d988(s32);                             /* extern */

s32 func_0205de18(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x3C) != 1) {
        return 0;
    }
    return func_0205d988(M2C_FIELD(arg0, s32 *, 0x18));
}
