#include "m2c.h"

s32 func_020266fc(s32);                             /* extern */

s32 func_02025214(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r2 == -1) {
        return 0;
    }
    return func_020266fc(M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 4));
}
