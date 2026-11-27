#include "m2c.h"

s32 func_020527fc(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u8 *, 0x4F9) < 0x24U) {
        return 1;
    }
    return 0;
}
