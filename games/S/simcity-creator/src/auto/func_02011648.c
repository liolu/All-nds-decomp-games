#include "engine.h"
#include "m2c.h"

void func_0201166c(M2C_UNK);
void func_02014100(M2C_UNK);

extern M2C_UNK data_020d4790;

void func_02011648(void) {
    func_02014100(1);
    M2C_FIELD(&data_020d4790, s32 *, 0xC) = 1;
    func_0201166c(1);
}
