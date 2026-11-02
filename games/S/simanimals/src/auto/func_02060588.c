#include "m2c.h"

s32 func_02060588(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) & 32) {
        return 1;
    }
    return 0;
}
