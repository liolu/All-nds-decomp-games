#include "m2c.h"

s32 func_0209189c(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_020929ac(M2C_UNK *);                       /* extern */

s32 func_02092b88(M2C_UNK arg0) {
    u8 sp0[20];

    if (func_020929ac(sp0) == 0) {
        return 0;
    }
    if (func_0209189c(sp0, arg0) != 0) {
        return 1;
    }
    return 0;
}
