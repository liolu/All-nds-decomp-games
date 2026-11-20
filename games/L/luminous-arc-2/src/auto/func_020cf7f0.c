#include "m2c.h"

void func_020cf7f0(s16 *arg0, s16 *arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0xC)  = (s32) (M2C_FIELD(arg2, s32 *, 0xC) + M2C_FIELD(arg2, s32 *, 4));
    M2C_FIELD(arg2, s32 *, 0x10) = (s32) (M2C_FIELD(arg2, s32 *, 0x10) + M2C_FIELD(arg2, s32 *, 8));
    *arg0                        = (s16) ((s32) M2C_FIELD(arg2, s32 *, 0xC) >> 8);
    *arg1                        = (s16) ((s32) M2C_FIELD(arg2, s32 *, 0x10) >> 8);
}
