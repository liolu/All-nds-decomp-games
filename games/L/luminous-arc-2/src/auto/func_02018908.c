#include "engine.h"
#include "m2c.h"

void func_0201892c(M2C_UNK);
void func_0201b34c(M2C_UNK);

extern M2C_UNK data_02150ed0;

void func_02018908(void) {
    func_0201b34c(1);
    M2C_FIELD(&data_02150ed0, s32 *, 0xC) = 1;
    func_0201892c(1);
}
