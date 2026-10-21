#include "m2c.h"

s32 func_0202a3f0(M2C_UNK, s32);                    /* extern */
s32 *func_0202aa78(M2C_UNK);                        /* extern */
s32 *func_0202aa98();                               /* extern */

s32 func_0202a360(M2C_UNK arg0) {
    if ((func_0202a3f0(arg0, *func_0202aa98()) == 0) && (func_0202a3f0(arg0, *func_0202aa78(arg0)) == 0)) {
        return 0;
    }
    return 1;
}
