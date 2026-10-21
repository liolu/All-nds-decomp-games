#include "engine.h"
#include "m2c.h"

void func_02023590(M2C_UNK);
void func_02026444(M2C_UNK);

void func_02024244(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE1F8) != 0xF) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C9C) = 0xA;
    func_02026444(arg0);
    func_02023590(arg0);
}
