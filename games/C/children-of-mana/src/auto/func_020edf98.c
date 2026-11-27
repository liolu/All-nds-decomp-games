#include "m2c.h"

s32 func_020edf98(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 8);
    if (((s32) temp_r1 >= 0) && ((s32) temp_r1 <= (s32) M2C_FIELD(arg0, s32 *, 0x2C))) {
        return 1;
    }
    return 0;
}
