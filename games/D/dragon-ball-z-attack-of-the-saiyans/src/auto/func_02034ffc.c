#include "m2c.h"

extern s32 data_020d1d24;

s32 func_02034ffc(s32 arg0, u8 arg1, s32 *arg2) {
    s32 temp_lr;

    temp_lr = (arg0 * 0xEC) + (data_020d1d24 + 0x634);
    *arg2   = temp_lr;
    if (M2C_FIELD(temp_lr, u8 *, 0x74) != 0) {
        return -1;
    }
    M2C_FIELD(temp_lr, u8 *, 0x74) = arg1;
    M2C_FIELD(*arg2, s8 *, 0x70)   = 0;
    M2C_FIELD(*arg2, s8 *, 0x71)   = 0x1F;
    M2C_FIELD(*arg2, s8 *, 0x75)   = 0;
    M2C_FIELD(*arg2, s32 *, 0x78)  = 0;
    M2C_FIELD(*arg2, s32 *, 0x7C)  = 0;
    M2C_FIELD(*arg2, s8 *, 0x90)   = 0;
    M2C_FIELD(*arg2, s8 *, 0x92)   = 0;
    M2C_FIELD(*arg2, s8 *, 0x93)   = 0;
    M2C_FIELD(*arg2, s8 *, 0x98)   = 0;
    M2C_FIELD(*arg2, s16 *, 0xA0)  = 0;
    M2C_FIELD(*arg2, s16 *, 0xA2)  = 0;
    M2C_FIELD(*arg2, s8 *, 0xAA)   = 0;
    M2C_FIELD(*arg2, s8 *, 0x88)   = 0;
    return arg0;
}
