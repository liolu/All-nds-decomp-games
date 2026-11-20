#include "engine.h"
#include "m2c.h"

void func_02013594(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02034948;

void func_02012d40(s32 arg0) {
    M2C_FIELD(&data_02034948, s32 *, 4) = arg0;
    func_02013594(arg0, 0, 0x21C);
}
