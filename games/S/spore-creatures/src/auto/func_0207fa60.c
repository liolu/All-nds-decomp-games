#include "m2c.h"

void func_0207fa60(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x44);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r2 < temp_r1) {
        temp_r2_2                    = temp_r2 + M2C_FIELD(arg0, s32 *, 0xA4);
        M2C_FIELD(arg0, s32 *, 0x48) = temp_r2_2;
        temp_r1_2                    = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_r2_2 > temp_r1_2) {
            M2C_FIELD(arg0, s32 *, 0x48) = temp_r1_2;
        }
        return;
    }
    if (temp_r2 <= temp_r1) {
        return;
    }
    temp_r2_3                    = temp_r2 - M2C_FIELD(arg0, s32 *, 0xA4);
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r2_3;
    temp_r1_3                    = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r2_3 < temp_r1_3) {
        M2C_FIELD(arg0, s32 *, 0x48) = temp_r1_3;
    }
}
