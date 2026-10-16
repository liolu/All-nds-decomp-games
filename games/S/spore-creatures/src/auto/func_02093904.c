#include "m2c.h"

M2C_UNK func_02093b2c(M2C_UNK);                     /* extern */
M2C_UNK func_02093bbc(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e7da4;

void func_02093904(void) {
    func_02093b2c(0);
    func_02093bbc(0);
    M2C_FIELD(&data_020e7da4, s8 *, 0x722) = 0;
    func_02093b2c(1);
    func_02093bbc(1);
    M2C_FIELD(&data_020e7da4, s8 *, 0xE46) = 0;
}
