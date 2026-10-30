#include "m2c.h"

s32 func_02059ba0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x14) != 0xEF) {
        return 1;
    }
    return 0;
}
