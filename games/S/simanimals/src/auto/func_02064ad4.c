#include "m2c.h"

M2C_UNK func_020667e4();                            /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206693c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0208e950;
extern M2C_UNK func_02064b28;

void func_02064ad4(void) {
    if (M2C_FIELD(&data_0208e950, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_0208e950, u16 *, 2) = 1U;
    func_020667e4();
    do {

    } while (func_0206693c(0xC, 1) == 0);
    func_020668f0(0xC, &func_02064b28);
}
