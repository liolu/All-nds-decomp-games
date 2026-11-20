#include "m2c.h"

s32 func_0202a63c(s32, M2C_UNK);                    /* extern */

s32 func_0206a10c(void *arg0) {
    s32 var_r4;

    if (arg0 == NULL) {
        return 0;
    }
    var_r4 = 0;
    if (func_0202a63c(M2C_FIELD(arg0, s32 *, 0x44), 0) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
