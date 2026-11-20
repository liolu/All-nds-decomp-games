#include "m2c.h"

void *func_020303dc();                              /* extern */
s32 func_02034214(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0203419c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(func_020303dc(), u16 *, 4) == 0) {
        return 0;
    }
    return func_02034214(arg0, arg1, arg2, 0);
}
