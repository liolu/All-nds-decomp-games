#include "m2c.h"

extern M2C_UNK data_020ec118;

void func_0201be30(void) {
    M2C_FIELD(M2C_FIELD(&data_020ec118, void **, 4), s16 *, 0x4B0) = 1;
    M2C_FIELD(&data_020ec118, u8 *, 0xE) = (u8) M2C_FIELD(M2C_FIELD(&data_020ec118, void **, 4), u8 *, 0x4B4);
    M2C_FIELD(&data_020ec118, s8 *, 0xC) = 5;
}
