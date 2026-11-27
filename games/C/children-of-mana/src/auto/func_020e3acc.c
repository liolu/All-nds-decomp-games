#include "m2c.h"

s32 func_020e3acc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x28) == 0) {
        return 1;
    }
    return 0;
}
