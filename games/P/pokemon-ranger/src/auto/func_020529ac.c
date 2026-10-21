#include "m2c.h"

void func_020529ac(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xC) + arg0), s32 *, 0x50) = arg2;
}
