#include "m2c.h"

void func_020958e4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 6)    = (s16) ((s32) M2C_FIELD(arg1, s32 *, 0) >> 4);
    M2C_FIELD(arg0, s16 *, 0xE)  = (s16) ((s32) M2C_FIELD(arg1, s32 *, 4) >> 4);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s32) M2C_FIELD(arg1, s32 *, 8) >> 4);
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) ((s32) M2C_FIELD(arg1, s32 *, 0xC) >> 4);
}
