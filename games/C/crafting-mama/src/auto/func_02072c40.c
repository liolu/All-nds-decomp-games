#include "m2c.h"

extern s32 data_020ca5c8;

void func_02072c40(s32 arg0) {
    s32 temp_r0;

    temp_r0       = data_020ca5c8 - arg0;
    data_020ca5c8 = temp_r0;
    if (temp_r0 < 0) {
        data_020ca5c8 = 0;
    }
}
