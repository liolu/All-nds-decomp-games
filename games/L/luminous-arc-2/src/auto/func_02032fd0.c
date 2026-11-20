#include "m2c.h"

extern M2C_UNK data_02181a4c;

void func_02032fd0(void) {
    M2C_FIELD(&data_02181a4c, u8 *, 0x260) = (u8) (M2C_FIELD(&data_02181a4c, u8 *, 0x260) + 1);
}
