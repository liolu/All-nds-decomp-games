#include "m2c.h"

void func_020b1218(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r1 > 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r1 - 1);
    }
}
