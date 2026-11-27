#include "m2c.h"

void func_0206a0e4(void *arg0) {
    s32 temp_r1;
    u8 temp_r2;
    u8 temp_r2_2;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    temp_r1                   = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 > 0) {
        temp_r2 = M2C_FIELD(arg0, u8 *, 4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) >= (s32) (temp_r2 << 0xC)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r2 << 0xC);
        }
        return;
    }
    if (temp_r1 < 0) {
        temp_r2_2 = M2C_FIELD(arg0, u8 *, 4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0) <= (s32) (temp_r2_2 << 0xC)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r2_2 << 0xC);
        }
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, u8 *, 4) << 0xC);
}
