#include "m2c.h"

s32 func_020668a8(M2C_UNK);                         /* extern */
extern M2C_UNK data_0216be68;

void func_02064a3c(void) {
    if (func_020668a8(5) == 0) {
        return;
    }
    M2C_FIELD(&data_0216be68, u8 *, 0xAD) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAD) + 1);
}
