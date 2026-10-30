#include "m2c.h"

u16 func_02098818(void *arg0, u32 arg1) {
    u16 temp_r2;

    if ((arg1 >= 0xFU) || (temp_r2 = M2C_FIELD(arg0, u16 *, 0x17A6), (temp_r2 == 0))) {
        return 0U;
    }
    return M2C_FIELD(((arg1 * 0x2C) + M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 0x1764)), u16 *, 0xC);
}
