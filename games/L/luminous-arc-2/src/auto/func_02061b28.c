#include "m2c.h"

extern M2C_UNK data_0216be68;

void func_02061b28(void) {
    M2C_FIELD(&data_0216be68, u8 *, 0xAC) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAC) + 1);
}
