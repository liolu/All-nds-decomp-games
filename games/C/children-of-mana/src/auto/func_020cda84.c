#include "m2c.h"

void func_020cda84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = 2;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
}
