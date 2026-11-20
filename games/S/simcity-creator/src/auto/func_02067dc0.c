#include "m2c.h"

s16 func_02067dc0(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_r0 != 0) {
        return M2C_FIELD((temp_r0 + (arg1 * 2)), s16 *, 4);
    }
    return 0;
}
