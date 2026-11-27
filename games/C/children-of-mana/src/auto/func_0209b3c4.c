#include "m2c.h"

u16 func_0209b3c4(void *arg0) {
    s32 temp_r2;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x10C);
    if ((temp_r3 >= 0) && (temp_r3 < 0xA)) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x110);
        if ((temp_r2 >= 0) && (temp_r2 < 6)) {
            return M2C_FIELD(((temp_r2 * 0x14) + (s32) arg0 + (temp_r3 * 2)), u16 *, 0x11C);
        }
    }
    return 0U;
}
