#include "m2c.h"

s32 func_0200bf00();                                /* extern */

u8 func_0200bf94(void **arg0) {
    if (func_0200bf00() != 0) {
        return M2C_FIELD(*arg0, u8 *, 0x52);
    }
    return 7U;
}
