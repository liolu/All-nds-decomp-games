#include "m2c.h"

s32 func_02079180();                                /* extern */
extern M2C_UNK data_02180a4c;

void func_020c969c(void) {
    if (func_02079180() != 1) {
        return;
    }
    M2C_FIELD(&data_02180a4c, u8 *, 0x748) = (u8) (M2C_FIELD(&data_02180a4c, u8 *, 0x748) + 1);
}
