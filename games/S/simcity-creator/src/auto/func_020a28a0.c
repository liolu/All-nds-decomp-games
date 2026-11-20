#include "m2c.h"

void func_020a28a0(void *arg0) {
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r2;
    s16 temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, volatile s16 *, 0x28);
    temp_r1 = M2C_FIELD(arg0, volatile s16 *, 0x2E);
    if ((s32) temp_r1 > (s32) temp_r2) {
        M2C_FIELD(arg0, volatile s16 *, 0x28) = temp_r1;
    } else if ((s32) temp_r1 < (s32) temp_r2) {
        M2C_FIELD(arg0, volatile s16 *, 0x28) = temp_r1;
    }
    temp_r2_2 = M2C_FIELD(arg0, volatile s16 *, 0x2A);
    temp_r1_2 = M2C_FIELD(arg0, volatile s16 *, 0x30);
    if ((s32) temp_r1_2 > (s32) temp_r2_2) {
        M2C_FIELD(arg0, volatile s16 *, 0x2A) = temp_r1_2;
        return;
    }
    if ((s32) temp_r1_2 < (s32) temp_r2_2) {
        M2C_FIELD(arg0, volatile s16 *, 0x2A) = temp_r1_2;
    }
}
