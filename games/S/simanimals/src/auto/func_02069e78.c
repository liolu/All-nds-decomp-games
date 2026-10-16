#include "m2c.h"

M2C_UNK func_020667e4();                            /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206693c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020906b8;
extern M2C_UNK func_02069f8c;

void func_02069e78(void) {
    if (M2C_FIELD(&data_020906b8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020906b8, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020906b8, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020906b8, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020906b8, s32 *, 0x28) = 0;
    M2C_FIELD(&data_020906b8, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020906b8, s32 *, 0x18) = 0;
    func_020667e4();
    do {

    } while (func_0206693c(5, 1) == 0);
    func_020668f0(5, &func_02069f8c);
}
