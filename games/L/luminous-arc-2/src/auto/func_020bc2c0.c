#include "m2c.h"

s32 func_020bae08(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020bb7cc();                            /* extern */
s32 func_020bbd78();                                /* extern */
s32 func_020bd9bc(void *);                          /* extern */

s32 func_020bc2c0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (func_020bbd78() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    func_020bb7cc(arg0);
    if (func_020bd9bc(arg0) == 0) {
        return 0;
    }
    if (func_020bae08(arg0, 2, arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}
