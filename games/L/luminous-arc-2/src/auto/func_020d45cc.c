#include "m2c.h"

extern M2C_UNK data_0216ce68;

void func_020d45cc(void) {
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) + 1);
}
