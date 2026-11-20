#include "m2c.h"

s32 func_02072c78();                                /* extern */

s32 func_02072d90(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_02072c78();
    if (M2C_FIELD(arg0, u8 *, 0) != 1) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0xF) == temp_r0) {
        return 1;
    }
    return 0;
}
