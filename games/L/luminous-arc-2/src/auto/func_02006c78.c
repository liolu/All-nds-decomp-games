#include "m2c.h"

M2C_UNK func_02008cd4();                            /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02008e2c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02147c68;
extern M2C_UNK func_02006ccc;

void func_02006c78(void) {
    if (M2C_FIELD(&data_02147c68, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_02147c68, u16 *, 2) = 1U;
    func_02008cd4();
    do {

    } while (func_02008e2c(0xC, 1) == 0);
    func_02008de0(0xC, &func_02006ccc);
}
