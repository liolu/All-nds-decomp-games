#include "m2c.h"

void func_0205f9c0(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != 0) {
        *arg0 = temp_r3 + 1;
        return;
    }
    temp_r0 = *arg1;
    if (temp_r0 != 0) {
        *arg1 = temp_r0 + 1;
        return;
    }
    *arg2 += 1;
}
