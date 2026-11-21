#include "m2c.h"

s32 func_02097910(s32 arg0, s8 *arg1, s8 *arg2) {
    s8 temp_r0;
    s8 temp_r2;

    temp_r2 = *arg2;
    temp_r0 = *arg1;
    if ((s32) temp_r0 < (s32) temp_r2) {
        return -1;
    }
    if ((s32) temp_r2 < (s32) temp_r0) {
        return 1;
    }
    return 0;
}
