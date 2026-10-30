#include "m2c.h"

void func_02090ba4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD((void *) 0x04001010, s32 *, 0) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x34) << 0x10)));
    M2C_FIELD((void *) 0x04001010, s32 *, 4) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x3C) << 0x10)));
    M2C_FIELD((void *) 0x04001010, s32 *, 8) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x40) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x44) << 0x10)));
    M2C_FIELD((void *) 0x04001010, s32 *, 0xC) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x48) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x4C) << 0x10)));
}
