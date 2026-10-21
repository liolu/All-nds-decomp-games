#include "m2c.h"

void func_0204f9c0(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r2;
    }
    temp_r2_2 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r2_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r2_2;
    }
    temp_r2_3 = M2C_FIELD(arg1, s32 *, 8);
    temp_r1   = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_r2_3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = temp_r2_3;
    }
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r1;
    }
}
