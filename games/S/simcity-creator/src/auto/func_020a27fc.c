#include "m2c.h"

void func_020a27fc(void *arg0) {
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r2;
    s16 temp_r2_2;
    s16 temp_r2_3;
    s16 temp_r2_4;
    s16 temp_r2_5;
    s16 temp_r2_6;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x28);
    temp_r1 = M2C_FIELD(arg0, s16 *, 0x2E);
    if ((s32) temp_r1 > (s32) temp_r2) {
        M2C_FIELD(arg0, s16 *, 0x28) = (s16) (temp_r2 + M2C_FIELD(arg0, s16 *, 0x32));
        temp_r2_2                    = M2C_FIELD(arg0, s16 *, 0x2E);
        if ((s32) temp_r2_2 < (s32) M2C_FIELD(arg0, s16 *, 0x28)) {
            M2C_FIELD(arg0, s16 *, 0x28) = temp_r2_2;
        }
    } else if ((s32) temp_r1 < (s32) temp_r2) {
        M2C_FIELD(arg0, s16 *, 0x28) = (s16) (temp_r2 - M2C_FIELD(arg0, s16 *, 0x32));
        temp_r2_3                    = M2C_FIELD(arg0, s16 *, 0x2E);
        if ((s32) temp_r2_3 > (s32) M2C_FIELD(arg0, s16 *, 0x28)) {
            M2C_FIELD(arg0, s16 *, 0x28) = temp_r2_3;
        }
    }
    temp_r2_4 = M2C_FIELD(arg0, s16 *, 0x2A);
    temp_r1_2 = M2C_FIELD(arg0, s16 *, 0x30);
    if ((s32) temp_r1_2 > (s32) temp_r2_4) {
        M2C_FIELD(arg0, s16 *, 0x2A) = (s16) (temp_r2_4 + M2C_FIELD(arg0, s16 *, 0x32));
        temp_r2_5                    = M2C_FIELD(arg0, s16 *, 0x30);
        if ((s32) temp_r2_5 < (s32) M2C_FIELD(arg0, s16 *, 0x2A)) {
            M2C_FIELD(arg0, s16 *, 0x2A) = temp_r2_5;
        }
        return;
    }
    if ((s32) temp_r1_2 >= (s32) temp_r2_4) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) (temp_r2_4 - M2C_FIELD(arg0, s16 *, 0x32));
    temp_r2_6                    = M2C_FIELD(arg0, s16 *, 0x30);
    if ((s32) temp_r2_6 > (s32) M2C_FIELD(arg0, s16 *, 0x2A)) {
        M2C_FIELD(arg0, s16 *, 0x2A) = temp_r2_6;
    }
}
