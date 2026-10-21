#include "m2c.h"

void func_0205ed84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((M2C_FIELD(arg0, s32 *, 0x1C) + arg1) - M2C_FIELD(arg0, s32 *, 0x20));
}
