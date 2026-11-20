#include "m2c.h"

s32 func_02010430();                                /* extern */
extern M2C_UNK data_02093ecc;

void func_0200f33c(void) {
    M2C_FIELD(&data_02093ecc, s32 *, 0x18) = func_02010430();
}
