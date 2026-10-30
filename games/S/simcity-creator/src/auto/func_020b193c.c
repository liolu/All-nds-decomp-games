#include "m2c.h"

void func_020b193c(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *) 0x0400001C = (arg1 & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
