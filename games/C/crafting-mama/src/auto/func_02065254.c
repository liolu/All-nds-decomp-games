#include "m2c.h"

void func_02065254(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;

    if (arg0 == NULL) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (arg2 == 1) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2 | arg1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2 & ~arg1);
}
