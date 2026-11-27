#include "m2c.h"

s32 func_020ef9a8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) <= 0) {
        return 1;
    }
    return 0;
}
