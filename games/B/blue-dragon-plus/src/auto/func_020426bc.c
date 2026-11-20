#include "engine.h"
#include "m2c.h"

void func_020426e0(M2C_UNK);
void func_02042a6c(M2C_UNK);

extern M2C_UNK data_02160ab0;

void func_020426bc(void) {
    func_02042a6c(1);
    M2C_FIELD(&data_02160ab0, s32 *, 0xC) = 1;
    func_020426e0(1);
}
