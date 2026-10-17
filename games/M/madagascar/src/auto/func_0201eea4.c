#include "m2c.h"

s32 func_0201eea4(void *arg0) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x24);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x110) - ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1);
}
