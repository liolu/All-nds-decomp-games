#include "m2c.h"

s32 func_02048c04(void **arg0, void **arg1) {
    s16 temp_r0;
    s16 temp_r1;

    temp_r1 = M2C_FIELD(*arg1, s16 *, 0xC);
    temp_r0 = M2C_FIELD(*arg0, s16 *, 0xC);
    if ((s32) temp_r0 < (s32) temp_r1) {
        return -1;
    }
    if ((s32) temp_r0 > (s32) temp_r1) {
        return 1;
    }
    return 0;
}
