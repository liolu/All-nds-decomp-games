#include "m2c.h"

s32 func_0201ee8c(void *arg0) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x28);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x114) - ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1);
}
