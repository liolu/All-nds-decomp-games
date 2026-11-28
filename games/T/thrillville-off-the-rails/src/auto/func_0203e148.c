#include "m2c.h"

s32 func_0203e148(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r1 == temp_r2) {
        return 0;
    }
    if (temp_r2 < temp_r1) {
        return M2C_FIELD(arg0, s32 *, 0x20) - 1;
    }
    return temp_r2 - temp_r1;
}
