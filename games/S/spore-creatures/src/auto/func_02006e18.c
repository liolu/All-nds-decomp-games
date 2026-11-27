#include "m2c.h"

void *func_02006608(s32);                           /* extern */

u8 func_02006e18(void *arg0) {
    return M2C_FIELD(func_02006608(M2C_FIELD(arg0, s32 *, 4)), u8 *, 1);
}
