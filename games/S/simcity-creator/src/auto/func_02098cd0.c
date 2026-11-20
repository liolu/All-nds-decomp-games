#include "m2c.h"

u8 func_02098cd0(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x17A6) * 4)), s32 *, 0x1764);
    if (temp_r2 == 0) {
        return 0U;
    }
    return M2C_FIELD((((M2C_FIELD(arg0, u16 *, 0x17A8) - 1) * 0x2C) + temp_r2), u8 *, 0x25);
}
