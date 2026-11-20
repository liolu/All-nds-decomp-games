#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203668c(M2C_UNK);
void func_02038258(M2C_UNK);

extern M2C_UNK data_0215de24;

void func_02038510(void) {
    if (M2C_FIELD(&data_0215de24, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0215de24, u16 *, 0) = 1U;
    func_02038258(1);
    M2C_FIELD(&data_0215de24, s32 *, 4) = 0;
    M2C_FIELD(&data_0215de24, s32 *, 8) = 0;
    func_0203668c(0x10);
}
