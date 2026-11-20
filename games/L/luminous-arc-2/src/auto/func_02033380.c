#include "m2c.h"

extern M2C_UNK data_02181a4c;

void func_02033380(void) {
    if (M2C_FIELD(&data_02181a4c, u8 *, 0x262) != 0) {
        M2C_FIELD(&data_02181a4c, u8 *, 0x262) = (u8) (M2C_FIELD(&data_02181a4c, u8 *, 0x262) - 1);
        return;
    }
    M2C_FIELD(&data_02181a4c, u8 *, 0x260) = (u8) (M2C_FIELD(&data_02181a4c, u8 *, 0x260) + 1);
}
