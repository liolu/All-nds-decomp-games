#include "engine.h"
#include "m2c.h"

void func_020857e4(M2C_UNK);
void func_020885e4(M2C_UNK);

extern M2C_UNK data_020fbcf8;

void func_020857c0(void) {
    func_020885e4(1);
    M2C_FIELD(&data_020fbcf8, s32 *, 0xC) = 1;
    func_020857e4(1);
}
