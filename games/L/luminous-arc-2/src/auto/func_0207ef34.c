#include "m2c.h"

s32 func_0207eee0(M2C_UNK);                         /* extern */
s32 func_0207eef4();                                /* extern */

s32 func_0207ef34(M2C_UNK arg0) {
    s32 var_r0;

    if (func_0207eef4() == 3) {
        if ((func_0207eee0(arg0) & 4) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
