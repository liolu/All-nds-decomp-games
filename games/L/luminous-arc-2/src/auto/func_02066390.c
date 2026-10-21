#include "m2c.h"

M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_02066390(void) {
    if (func_020cab60() != 3) {
        return;
    }
    func_020caa3c(3, 1, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
