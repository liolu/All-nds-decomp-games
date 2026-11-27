#include "m2c.h"

s32 func_0209e508(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0209f630(M2C_UNK *);                       /* extern */

s32 func_0209f80c(M2C_UNK arg0) {
    u8 sp0[20];

    if (func_0209f630(sp0) == 0) {
        return 0;
    }
    if (func_0209e508(sp0, arg0) != 0) {
        return 1;
    }
    return 0;
}
