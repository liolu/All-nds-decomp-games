#include "m2c.h"

void func_02046394(s32 arg0, s32 arg1, s8 arg2) {
    if (arg1 < 0xA) {
        M2C_FIELD((arg0 + arg1), s8 *, 0x806B) = arg2;
    }
}
