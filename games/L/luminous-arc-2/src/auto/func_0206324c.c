#include "m2c.h"

M2C_UNK func_0207aa14();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216ce68;

void func_0206324c(void) {
    func_0207aa14();
    func_020caa3c(3, 1, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) + 1);
}
