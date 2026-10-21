#include "m2c.h"

s32 func_020cadb4();                                /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bc80;

void func_0205239c(void) {
    if (func_020cadb4() != 3) {
        return;
    }
    if (M2C_FIELD(&data_0216bc80, u16 *, 8) == 0x63) {
        M2C_FIELD(&data_02158048, u8 *, 1) = 0U;
        return;
    }
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
