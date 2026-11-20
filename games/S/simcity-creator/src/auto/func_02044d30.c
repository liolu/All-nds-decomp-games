#include "m2c.h"

void func_02044d30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (arg1 + 1);
    M2C_FIELD(arg0, s32 *, 0x468) = 2;
}
