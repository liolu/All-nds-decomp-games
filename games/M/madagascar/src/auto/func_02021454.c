#include "m2c.h"

s32 func_02021454(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) > 0x20) {
        return 1;
    }
    return 0;
}
