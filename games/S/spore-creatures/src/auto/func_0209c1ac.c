#include "m2c.h"

s32 func_0209c1ac(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xAC) == 1) && (M2C_FIELD(arg0, u8 *, 0xAD) == 0)) {
        return 1;
    }
    return 0;
}
