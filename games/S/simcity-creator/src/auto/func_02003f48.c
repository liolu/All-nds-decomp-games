#include "engine.h"
#include "m2c.h"

void func_02001e88(M2C_UNK);
void func_02006c48(M2C_UNK);

extern s32 data_020c7a84;
extern M2C_UNK data_020d0bbc;

void func_02003f48(void) {
    if (data_020c7a84 != -1) {
        func_02006c48(data_020c7a84);
    }
    func_02001e88(M2C_FIELD(&data_020d0bbc, s32 *, 0));
    M2C_FIELD(&data_020d0bbc, s32 *, 0)    = 0;
    M2C_FIELD(&data_020d0bbc, s32 *, 0x10) = 0;
}
