#include "m2c.h"

s32 func_0209fbf8(M2C_UNK);                         /* extern */
s32 func_0209fc0c();                                /* extern */

s32 func_0209fc1c(M2C_UNK arg0) {
    s32 var_r0;

    if (func_0209fc0c() == 3) {
        if ((func_0209fbf8(arg0) & 4) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
