#include "m2c.h"

s32 func_0201a224(s32, s32);                        /* extern */

s32 func_02082810(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x7940);
    if (temp_r1 == 0) {
        return 0;
    }
    return func_0201a224(temp_r1 * 0x64, 0x7FFF);
}
