#include "m2c.h"

s16 func_02006f0c(M2C_UNK);                         /* extern */

s32 func_02046734(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s16 *, 0x78) = func_02006f0c(0x10000);
    return 1;
}
