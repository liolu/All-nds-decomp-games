#include "m2c.h"

M2C_UNK func_020667e4();                            /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206693c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020905f0;
extern M2C_UNK func_02068518;

void func_02068798(void) {
    if (M2C_FIELD(&data_020905f0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020905f0, u16 *, 0) = 1U;
    func_020667e4();
    M2C_FIELD(&data_020905f0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_020905f0, s32 *, 4)    = 0;
    M2C_FIELD(&data_020905f0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020905f0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020905f0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_020905f0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_020905f0, s16 *, 0x38) = 0;
    do {

    } while (func_0206693c(6, 1) == 0);
    func_020668f0(6, &func_02068518);
}
