#include "m2c.h"

M2C_UNK func_020d6548();                            /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021e3798;
extern M2C_UNK func_020dbc34;

void func_020db9c0(void) {
    if (M2C_FIELD(&data_021e3798, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021e3798, u16 *, 0)    = 1U;
    M2C_FIELD(&data_021e3798, s32 *, 12)   = 0;
    M2C_FIELD(&data_021e3798, s32 *, 16)   = 0;
    M2C_FIELD(&data_021e3798, s32 *, 0x28) = 0;
    M2C_FIELD(&data_021e3798, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021e3798, s32 *, 0x18) = 0;
    func_020d6548();
    do {

    } while (func_020d66a0(5, 1) == 0);
    func_020d6654(5, &func_020dbc34);
}
