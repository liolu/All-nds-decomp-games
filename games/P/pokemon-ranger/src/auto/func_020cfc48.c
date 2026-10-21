#include "m2c.h"

extern void *data_020f8a80;

s32 func_020cfc48(void) {
    return M2C_FIELD(data_020f8a80, s32 *, 0x20);
}
