#include "m2c.h"

s32 func_02032774(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02032eb8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, u8 *, 4) == func_02032774(arg1, arg2)) {
        return 1;
    }
    return 0;
}
