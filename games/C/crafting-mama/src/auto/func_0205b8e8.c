#include "m2c.h"

extern void *data_020b2260;

u32 func_0205b8e8(void) {
    if (data_020b2260 == NULL) {
        return -1U;
    }
    return (u32) (M2C_FIELD(data_020b2260, s32 *, 0x58) << 0x1C) >> 0x1E;
}
