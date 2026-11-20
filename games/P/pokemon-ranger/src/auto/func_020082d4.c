#include "engine.h"
#include "m2c.h"

void func_02010114(M2C_UNK);
void func_020102b4(M2C_UNK);

void func_020082d4(s32 arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x5F0) - 9) > 1U) {
        return;
    }
    func_020102b4(arg0);
    M2C_FIELD(arg0, u8 *, 0x2B7) = (u8) (M2C_FIELD(arg0, u8 *, 0x2B7) & ~1);
    func_02010114(arg0);
}
