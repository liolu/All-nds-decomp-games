#include "m2c.h"

s32 func_020bae08(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020bbd78();                                /* extern */

s32 func_020bc274(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (func_020bbd78() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 5;
    if (func_020bae08(arg0, 0, 0, 0) != 0) {
        return 1;
    }
    return 0;
}
