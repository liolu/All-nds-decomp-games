#include "m2c.h"

s32 func_020aaa78(M2C_UNK, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 func_020aabb0(M2C_UNK arg0) {
    s32 sp0;

    sp0 = 0;
    if (func_020aaa78(arg0, &sp0, 0, 0) == 1) {
        return sp0;
    }
    return 0;
}
