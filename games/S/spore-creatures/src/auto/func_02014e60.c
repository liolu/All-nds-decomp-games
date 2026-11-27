#include "m2c.h"

void func_02014e60(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    temp_r1                      = (s32) M2C_FIELD(arg2, s32 *, 0) >> 0x13;
    M2C_FIELD(arg0, s32 *, 0xC)  = temp_r1;
    M2C_FIELD(arg0, s32 *, 4)    = temp_r1;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 4) >> 0x13);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0x10) >> 0x13);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0x14) >> 0x13);
}
