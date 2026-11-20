#include "m2c.h"

M2C_UNK func_0203668c(M2C_UNK);                     /* extern */
extern M2C_UNK data_0215de30;

void func_02038880(void) {
    if (M2C_FIELD(&data_0215de30, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0215de30, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0215de30, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0215de30, s32 *, 0x10) = 0;
    func_0203668c(4);
    M2C_FIELD(&data_0215de30, s32 *, 8) = 0;
    M2C_FIELD(&data_0215de30, s32 *, 4) = 0;
}
