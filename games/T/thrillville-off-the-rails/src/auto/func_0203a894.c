#include "m2c.h"

void func_0203a894(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD((void *) 0x04001008, u16 *, 0) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~3) | arg1);
    M2C_FIELD((void *) 0x04001008, u16 *, 2) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 2) & ~3) | arg2);
    M2C_FIELD((void *) 0x04001008, u16 *, 4) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 4) & ~3) | arg3);
    M2C_FIELD((void *) 0x04001008, u16 *, 6) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 6) & ~3) | arg4);
}
