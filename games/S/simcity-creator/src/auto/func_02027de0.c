#include "m2c.h"

void func_02027de0(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x64);
    if ((temp_r4 == 0xC) && (M2C_FIELD(arg0, s32 *, 0x68) == 1)) {
        *arg1 = ((temp_r4 - 2) * 0x10) + 0x30;
        *arg2 = (M2C_FIELD(arg0, s32 *, 0x68) * 0x10) + 0x20;
        *arg3 = *arg1 + 0x10;
        *arg4 = *arg2;
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x68);
    if ((temp_r5 == 4) && (temp_r4 >= 4) && (temp_r4 <= 8)) {
        *arg1 = 0x68;
        *arg2 = 0x60;
        *arg3 = *arg1 + 0x48;
        *arg4 = *arg2;
        return;
    }
    if (temp_r4 >= 2) {
        *arg1 = ((temp_r4 - 3) * 0x10) + 0x38 + (temp_r5 * 8);
        *arg2 = (M2C_FIELD(arg0, s32 *, 0x68) * 0x10) + 0x20;
        *arg3 = *arg1 + 8;
        *arg4 = *arg2;
        return;
    }
    if ((temp_r4 == 1) && (temp_r5 == 2)) {
        *arg1 = 0x26;
        *arg2 = 0x40;
        *arg3 = 0x30;
        *arg4 = *arg2;
        return;
    }
    if ((temp_r4 == 1) && (temp_r5 == 3)) {
        *arg1 = 0x26;
        *arg2 = 0x50;
        *arg3 = 0x38;
        *arg4 = *arg2;
        return;
    }
    *arg1 = 0x10;
    *arg2 = (M2C_FIELD(arg0, s32 *, 0x68) * 0x10) + 0x1E;
    *arg3 = *arg1 + 8;
    *arg4 = *arg2;
}
