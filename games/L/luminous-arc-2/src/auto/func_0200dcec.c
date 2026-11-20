#include "m2c.h"

M2C_UNK func_02008cd4();                            /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02008e2c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02149958;
extern M2C_UNK func_0200df60;

void func_0200dcec(void) {
    if (M2C_FIELD(&data_02149958, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02149958, u16 *, 0)    = 1U;
    M2C_FIELD(&data_02149958, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02149958, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02149958, s32 *, 0x28) = 0;
    M2C_FIELD(&data_02149958, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02149958, s32 *, 0x18) = 0;
    func_02008cd4();
    do {

    } while (func_02008e2c(5, 1) == 0);
    func_02008de0(5, &func_0200df60);
}
