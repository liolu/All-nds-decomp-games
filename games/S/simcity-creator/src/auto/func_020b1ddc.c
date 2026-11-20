#include "m2c.h"

void func_020b1ddc(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *) 0x04001010 = (arg1 & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
