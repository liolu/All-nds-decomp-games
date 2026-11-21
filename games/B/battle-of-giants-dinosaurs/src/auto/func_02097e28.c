#include "m2c.h"

s32 func_02097e64();                /* extern */

s32 func_02097e28(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02097e64();
    temp_r0 = func_02097e64(arg0, arg2);
    if (temp_r4 < temp_r0) {
        return -1;
    }
    if (temp_r0 < temp_r4) {
        return 1;
    }
    return 0;
}
