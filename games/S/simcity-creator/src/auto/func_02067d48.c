#include "m2c.h"

s32 func_02067d48(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 >= (s32) M2C_FIELD(arg0, u16 *, 0x6A)) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) arg2;
    M2C_FIELD(arg0, s16 *, 0x6E) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    M2C_FIELD(arg0, s32 *, 0x70) = 1;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + (M2C_FIELD(arg0, u16 *, 0x6C) * arg2 * 8));
    return 1;
}
