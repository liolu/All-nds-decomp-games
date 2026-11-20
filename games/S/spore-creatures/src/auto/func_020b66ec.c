#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b465c(M2C_UNK);
void func_020b6484(M2C_UNK);

extern M2C_UNK data_020f1cb8;

void func_020b66ec(void) {
    if (M2C_FIELD(&data_020f1cb8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020f1cb8, u16 *, 0) = 1U;
    func_020b6484(1);
    M2C_FIELD(&data_020f1cb8, s32 *, 4) = 0;
    M2C_FIELD(&data_020f1cb8, s32 *, 8) = 0;
    func_020b465c(0x10);
}
