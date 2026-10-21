#include "engine.h"
#include "m2c.h"

M2C_UNK func_02004534(M2C_UNK);
void func_02006424(M2C_UNK);

extern M2C_UNK data_02147c48;

void func_020066fc(void) {
    if (M2C_FIELD(&data_02147c48, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02147c48, u16 *, 0) = 1U;
    func_02006424(1);
    M2C_FIELD(&data_02147c48, s32 *, 4) = 0;
    M2C_FIELD(&data_02147c48, s32 *, 8) = 0;
    func_02004534(0x10);
}
