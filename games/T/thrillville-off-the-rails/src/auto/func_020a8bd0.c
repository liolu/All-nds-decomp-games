#include "m2c.h"

void func_020a8bd0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x2D0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x2D4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
