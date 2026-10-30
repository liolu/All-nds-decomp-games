#include "m2c.h"

void func_020b18ec(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *) 0x04000014 = (arg1 & 0x1FF) | (0x01FF0000 & (arg2 << 0x10));
}
