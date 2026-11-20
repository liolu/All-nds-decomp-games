#include "engine.h"
#include "m2c.h"

M2C_UNK func_020042d8(M2C_UNK);
void func_020060d8(M2C_UNK);

extern M2C_UNK data_020d0fa8;

void func_02006310(void) {
    if (M2C_FIELD(&data_020d0fa8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d0fa8, u16 *, 0) = 1U;
    func_020060d8(1);
    M2C_FIELD(&data_020d0fa8, s32 *, 4) = 0;
    M2C_FIELD(&data_020d0fa8, s32 *, 8) = 0;
    func_020042d8(0x10);
}
