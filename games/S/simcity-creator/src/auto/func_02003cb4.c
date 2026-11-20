#include "engine.h"
#include "m2c.h"

void func_02001bc8(M2C_UNK);
void func_02006c48(M2C_UNK);

extern s32 data_020c7a84;
extern M2C_UNK data_020d0bbc;

void func_02003cb4(void) {
    if (data_020c7a84 != -1) {
        func_02006c48(data_020c7a84);
    }
    func_02001bc8(M2C_FIELD(&data_020d0bbc, s32 *, 0x14));
    M2C_FIELD(&data_020d0bbc, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_020d0bbc, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020d0bbc, s32 *, 4)    = 0;
    M2C_FIELD(&data_020d0bbc, s32 *, 0x14) = 0;
}
