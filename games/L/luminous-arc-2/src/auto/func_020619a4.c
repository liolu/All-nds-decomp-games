#include "m2c.h"

s32 func_020668a8(M2C_UNK);                         /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216be68;

void func_020619a4(void) {
    if (func_020668a8(0xA) == 0) {
        return;
    }
    func_020caa3c(2, 1, 0x10);
    M2C_FIELD(&data_0216be68, u8 *, 0xAC) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAC) + 1);
}
