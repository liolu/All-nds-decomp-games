#include "engine.h"
#include "m2c.h"

void func_0207b594(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207b5c8(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0207b658(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 spC[12];
    u8 sp0[12];

    func_0207b594(arg1, arg0, (s32) spC);
    func_0207b594(arg2, arg0, (s32) sp0);
    func_0207b5c8((s32) spC, (s32) sp0, arg3);
}
