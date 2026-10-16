#include "engine.h"
#include "m2c.h"

void func_02001da0(M2C_UNK);
void func_02006c48(M2C_UNK);

extern s32 data_020c7a84;
extern M2C_UNK data_020d0bbc;

void func_02003da0(void) {
    if (data_020c7a84 != -1) {
        func_02006c48(data_020c7a84);
    }
    func_02001da0(M2C_FIELD(&data_020d0bbc, s32 *, 0xC));
    M2C_FIELD(&data_020d0bbc, s32 *, 0xC) = 0;
    M2C_FIELD(&data_020d0bbc, s32 *, 8)   = 0;
}
