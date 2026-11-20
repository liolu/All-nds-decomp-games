#include "m2c.h"

s32 func_020293d0(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0) == 0) && (M2C_FIELD(arg0, u16 *, 0x18) == 0)) {
        return 0;
    }
    return 1;
}
