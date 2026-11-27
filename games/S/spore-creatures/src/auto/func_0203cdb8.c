#include "m2c.h"

void func_0203cdb8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) (M2C_FIELD(arg0, s32 *, 0x184) & ~(1 << arg1));
}
