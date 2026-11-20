#include "m2c.h"

extern M2C_UNK data_020decc4;

void func_0206fea4(void) {
    M2C_FIELD(M2C_FIELD(&data_020decc4, void **, 4), s16 *, 0x4A8) = 1;
    M2C_FIELD(&data_020decc4, u8 *, 0xE) = (u8) M2C_FIELD(M2C_FIELD(&data_020decc4, void **, 4), u8 *, 0x4AC);
    M2C_FIELD(&data_020decc4, s8 *, 0xC) = 5;
}
