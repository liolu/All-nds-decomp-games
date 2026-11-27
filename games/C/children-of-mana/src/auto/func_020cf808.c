#include "m2c.h"

void func_020cf808(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(((arg1 * 0x30) + arg0), s8 *, 0x21) = arg2;
}
