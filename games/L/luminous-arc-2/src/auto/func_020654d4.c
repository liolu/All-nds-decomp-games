#include "m2c.h"

s32 func_020668a8(M2C_UNK);                         /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_020654d4(void) {
    if (func_020cab60() != 3) {
        return;
    }
    if (func_020668a8(0xB4) == 0) {
        return;
    }
    func_020caa3c(3, 1, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
