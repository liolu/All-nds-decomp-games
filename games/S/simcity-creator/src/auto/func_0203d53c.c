#include "m2c.h"

void func_0203d53c(s32 arg0, s32 arg1, s32 arg2) {
    *(u16 *) 0x400000E = (*(u16 *) 0x400000E & 0x43) | (arg0 << 0xE) | 0x84 | (arg2 << 8) | (arg1 << 0xD);
}
