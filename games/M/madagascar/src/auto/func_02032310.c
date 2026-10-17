#include "m2c.h"

extern void *data_020d8798;

s32 func_02032310(void) {
    return M2C_FIELD(data_020d8798, s32 *, 0x1C) - M2C_FIELD(data_020d8798, s32 *, 0x18);
}
