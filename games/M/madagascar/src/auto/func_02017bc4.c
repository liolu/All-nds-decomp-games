#include "m2c.h"

void func_02017bc4(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s8 *, 0x2EC)  = 1;
    M2C_FIELD(arg0, s32 *, 0x2F0) = (s32) *arg1;
}
