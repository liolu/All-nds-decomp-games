#include "m2c.h"

M2C_UNK func_02041bf8();                            /* extern */
M2C_UNK func_02041cac(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02041cf8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020c2984;
extern M2C_UNK func_020400c4;

void func_02040070(void) {
    if (M2C_FIELD(&data_020c2984, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_020c2984, u16 *, 2) = 1U;
    func_02041bf8();
    do {

    } while (func_02041cf8(0xC, 1) == 0);
    func_02041cac(0xC, &func_020400c4);
}
