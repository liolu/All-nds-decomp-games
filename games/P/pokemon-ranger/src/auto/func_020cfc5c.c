#include "m2c.h"

extern void *data_020f8a80;

s32 func_020cfc5c(void) {
    return M2C_FIELD(data_020f8a80, s32 *, 0x18);
}
