#include "m2c.h"

s32 func_020eba70(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0xA) {
        return 1;
    }
    return 0;
}
