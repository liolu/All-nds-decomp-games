#include "m2c.h"

s32 func_02087820();                                /* extern */
s32 func_0208983c(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_020877ec(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02087820() == 0) {
        return 0;
    }
    return func_0208983c(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
}
