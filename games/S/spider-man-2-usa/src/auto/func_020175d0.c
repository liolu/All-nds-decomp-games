#include "m2c.h"

s32 func_020175d0(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r3;

    temp_r2                      = M2C_FIELD(arg0, s32 *, 8);
    temp_r3                      = arg1 ^ temp_r2;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (temp_r2 & temp_r3);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg1 & temp_r3);
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    return 1;
}
