#include "m2c.h"

M2C_UNK func_020d6548();                            /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021e1a24;
extern M2C_UNK func_020d3b24;

void func_020d3ad0(void) {
    if (M2C_FIELD(&data_021e1a24, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_021e1a24, u16 *, 2) = 1U;
    func_020d6548();
    do {

    } while (func_020d66a0(0xC, 1) == 0);
    func_020d6654(0xC, &func_020d3b24);
}
