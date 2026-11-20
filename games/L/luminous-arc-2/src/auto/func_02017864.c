#include "engine.h"
#include "m2c.h"

void func_020075b0(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021508c4;

void func_02017864(s32 arg0) {
    M2C_FIELD(&data_021508c4, s32 *, 4) = arg0;
    func_020075b0(arg0, 0, 0x21C);
}
