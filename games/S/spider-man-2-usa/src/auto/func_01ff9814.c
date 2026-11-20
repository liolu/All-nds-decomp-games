#include "m2c.h"

void func_01ff9814(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C8) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2D0) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
