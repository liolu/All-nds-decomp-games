#include "m2c.h"

void *func_02060e9c();                              /* extern */

s32 func_02041168(void *arg0) {
    if ((M2C_FIELD(func_02060e9c(), s32 *, 4) != 0xB) || (M2C_FIELD(func_02060e9c(), s32 *, 8) != 1)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
        return 1;
    }
    return 0;
}
