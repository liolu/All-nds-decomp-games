#include "m2c.h"

void func_ov084_021296b0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x41C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
