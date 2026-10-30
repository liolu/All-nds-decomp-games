#include "m2c.h"

void func_020afe34(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) & ~1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 1);
    M2C_FIELD(arg0, s16 *, 0x94) = (s16) arg1;
}
