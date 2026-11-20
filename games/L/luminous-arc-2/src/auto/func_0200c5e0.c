#include "m2c.h"

M2C_UNK func_02008cd4();                            /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02008e2c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021498f0;
extern M2C_UNK func_0200c360;

void func_0200c5e0(void) {
    if (M2C_FIELD(&data_021498f0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021498f0, u16 *, 0) = 1U;
    func_02008cd4();
    M2C_FIELD(&data_021498f0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_021498f0, s32 *, 4)    = 0;
    M2C_FIELD(&data_021498f0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021498f0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_021498f0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_021498f0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_021498f0, s16 *, 0x38) = 0;
    do {

    } while (func_02008e2c(6, 1) == 0);
    func_02008de0(6, &func_0200c360);
}
