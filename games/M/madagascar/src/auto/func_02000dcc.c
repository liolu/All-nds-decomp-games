#include "m2c.h"

void func_02000dcc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
