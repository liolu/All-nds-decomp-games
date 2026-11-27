#include "engine.h"
#include "m2c.h"

void func_020e47e4(M2C_UNK);
void func_020e9450(M2C_UNK);

extern M2C_UNK data_021e53b0;

void func_020e47c0(void) {
    func_020e9450(1);
    M2C_FIELD(&data_021e53b0, s32 *, 0xC) = 1;
    func_020e47e4(1);
}
