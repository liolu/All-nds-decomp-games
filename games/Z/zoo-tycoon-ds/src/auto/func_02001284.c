#include "m2c.h"

extern void *data_020ce1d4;

s32 func_02001284(void) {
    return M2C_FIELD(M2C_FIELD(data_020ce1d4, void **, 0xC), s32 *, 0x14);
}
