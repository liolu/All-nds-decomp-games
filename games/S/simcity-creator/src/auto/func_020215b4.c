#include "m2c.h"

s32 func_020215b4(void) {
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x1F00);
    M2C_FIELD((void *) 0x05000000, s16 *, 0)      = 0;
    M2C_FIELD((void *) 0x05000000, s16 *, 0x400)  = 0;
    return 1;
}
