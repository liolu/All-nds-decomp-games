#include "m2c.h"

void func_02091714(s32 arg0, s32 arg1, s32 arg2) {
    *(u16 *) 0x400100C = (*(u16 *) 0x400100C & 0x43) | (arg0 << 0xE) | 0x80 | (arg2 << 8) | (arg1 << 0xD);
}
