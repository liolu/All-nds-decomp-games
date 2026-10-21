#include "m2c.h"

s32 func_0206da88(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_0206d720(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) < 0) {
        M2C_FIELD(arg0, s32 *, 8)   = arg1;
        M2C_FIELD(arg0, s32 *, 0xC) = func_0206da88(arg1, arg2, arg3);
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}
