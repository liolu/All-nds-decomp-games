#include "m2c.h"

s32 func_0204ece4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xD) != 3) {
        return 1;
    }
    if (M2C_FIELD(arg0, u8 *, 0xE) != 0) {
        return 1;
    }
    if (M2C_FIELD(arg0, u8 *, 0xF) != 0) {
        return 1;
    }
    return 0;
}
