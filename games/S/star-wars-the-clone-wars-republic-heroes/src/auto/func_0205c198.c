#include "engine.h"
#include "m2c.h"

void func_0205c1bc(M2C_UNK);
void func_0205c5e8(M2C_UNK);

extern M2C_UNK data_020b5e80;

void func_0205c198(void) {
    func_0205c5e8(1);
    M2C_FIELD(&data_020b5e80, s32 *, 0xC) = 1;
    func_0205c1bc(1);
}
