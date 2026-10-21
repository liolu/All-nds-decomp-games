#include "engine.h"
#include "m2c.h"

void func_0201014c(M2C_UNK);
void func_020127d0(M2C_UNK, M2C_UNK);

void func_02010114(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 1;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 1);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601) = 1;
    M2C_FIELD(arg0, s8 *, 0x600) = 1;
}
