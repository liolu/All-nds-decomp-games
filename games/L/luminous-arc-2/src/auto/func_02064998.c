#include "m2c.h"

M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216be68;

void func_02064998(void) {
    func_020caa3c(1, 1, 0x10);
    M2C_FIELD(&data_0216be68, u8 *, 0xAD) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAD) + 1);
}
