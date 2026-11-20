#include "m2c.h"

s32 func_02044bd4(s32);                             /* extern */
s32 func_020942a0();                                /* extern */

s32 func_02094474(void *arg0) {
    if (func_020942a0() == 0) {
        return arg0 + 0x384;
    }
    return func_02044bd4(M2C_FIELD(arg0, s32 *, 0x4F8));
}
