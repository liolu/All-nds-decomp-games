#include "m2c.h"

M2C_UNK func_020d6548();                            /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021e370c;
extern M2C_UNK func_020daaa8;

void func_020da830(void) {
    if (M2C_FIELD(&data_021e370c, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021e370c, u16 *, 0) = 1U;
    M2C_FIELD(&data_021e370c, s32 *, 4) = 0;
    M2C_FIELD(&data_021e370c, s32 *, 8) = 0;
    func_020d6548();
    do {

    } while (func_020d66a0(9, 1) == 0);
    *(s32 *) 0x27FFF90 = 0;
    func_020d6654(9, &func_020daaa8);
}
