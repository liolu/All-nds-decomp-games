#include "m2c.h"

void func_02090cb8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    *(s32 *) 0x04001010          = (M2C_FIELD(arg0, s32 *, 0x30) & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
