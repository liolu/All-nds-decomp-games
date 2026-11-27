#include "m2c.h"

s32 func_0203cdf8(s32);                             /* extern */
s32 func_0203ce2c();                                /* extern */

s32 func_0203cdd0(void *arg0) {
    if (func_0203ce2c() != 0) {
        return 5;
    }
    return func_0203cdf8((s32) M2C_FIELD(arg0, s32 *, 0x1A4) >> 0xC);
}
