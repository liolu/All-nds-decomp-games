#include "engine.h"
#include "m2c.h"

void func_02059144(M2C_UNK);
void func_0205bc90(M2C_UNK);

extern M2C_UNK data_020e5d2c;

void func_02059120(void) {
    func_0205bc90(1);
    M2C_FIELD(&data_020e5d2c, s32 *, 0xC) = 1;
    func_02059144(1);
}
