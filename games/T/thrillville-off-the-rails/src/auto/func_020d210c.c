#include "m2c.h"

void func_020d210c(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r2 != M2C_FIELD(arg0, s32 *, 0x14)) {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r2;
    }
}
