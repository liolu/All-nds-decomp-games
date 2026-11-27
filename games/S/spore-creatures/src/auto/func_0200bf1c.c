#include "m2c.h"

s32 func_0200bf00();                                /* extern */

s32 func_0200bf1c(void **arg0, s32 arg1) {
    if ((func_0200bf00() != 0) && (arg1 == M2C_FIELD(*arg0, u8 *, 0x53))) {
        return 1;
    }
    return 0;
}
