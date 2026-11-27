#include "m2c.h"

s32 func_02052810(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u8 *, 0x4FA) < 0x6DU) {
        return 1;
    }
    return 0;
}
