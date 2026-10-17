#include "m2c.h"

void func_0203ba2c(void *arg0, s32 arg1) {
    s32 temp_r2;

    if (arg1 > (s32) M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 4) > temp_r2) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r2;
    }
}
