#include "m2c.h"

s32 func_0200c6cc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) & 512) {
        return 1;
    }
    return 0;
}
