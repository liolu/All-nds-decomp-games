#include "m2c.h"

M2C_UNK func_020d6548();                            /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021e36d0;
extern M2C_UNK func_020d9c70;

void func_020d9ef0(void) {
    if (M2C_FIELD(&data_021e36d0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021e36d0, u16 *, 0) = 1U;
    func_020d6548();
    M2C_FIELD(&data_021e36d0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_021e36d0, s32 *, 4)    = 0;
    M2C_FIELD(&data_021e36d0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021e36d0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_021e36d0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_021e36d0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_021e36d0, s16 *, 0x38) = 0;
    do {

    } while (func_020d66a0(6, 1) == 0);
    func_020d6654(6, &func_020d9c70);
}
