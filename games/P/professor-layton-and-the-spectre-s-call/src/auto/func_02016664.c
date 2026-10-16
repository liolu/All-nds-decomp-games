#include "engine.h"
#include "m2c.h"

void func_020165c8(M2C_UNK, M2C_UNK);

void func_02016664(s32 arg0, s32 arg1, s32 arg2) {
    func_020165c8(arg0, arg2 | (arg1 & (-0x1000 << ((u32) (arg2 - 0x16) >> 1))) | 1);
}
