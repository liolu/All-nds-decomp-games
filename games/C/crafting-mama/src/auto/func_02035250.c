#include "m2c.h"

void func_02035250(void *arg0) {
    s32 temp_r2;
    s32 temp_r2_2;

    if (arg0 == NULL) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2 & 4) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2 & 0xFFFB);
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2_2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2_2 & 0xFFFE);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
