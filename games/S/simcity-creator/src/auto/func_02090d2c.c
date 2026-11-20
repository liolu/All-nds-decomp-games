#include "m2c.h"

void func_02090d2c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = arg2;
    *(s32 *) 0x04001018          = (M2C_FIELD(arg0, s32 *, 0x40) & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
