#include "m2c.h"

s32 func_0207b988(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r1 = arg3 - arg1;
    temp_r0 = arg2 - arg0;
    if ((s32) ((temp_r0 * temp_r0) + (temp_r1 * temp_r1)) < (s32) (arg4 * arg4)) {
        return 1;
    }
    return 0;
}
