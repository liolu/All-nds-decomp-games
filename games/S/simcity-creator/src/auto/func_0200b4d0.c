#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020084d8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020d2c50;
extern M2C_UNK func_0200b250;

void func_0200b4d0(void) {
    if (M2C_FIELD(&data_020d2c50, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d2c50, u16 *, 0) = 1U;
    func_02008380();
    M2C_FIELD(&data_020d2c50, s16 *, 0x10) = 0;
    M2C_FIELD(&data_020d2c50, s32 *, 4)    = 0;
    M2C_FIELD(&data_020d2c50, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020d2c50, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020d2c50, s16 *, 0x34) = 0;
    M2C_FIELD(&data_020d2c50, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_020d2c50, s16 *, 0x38) = 0;
    do {

    } while (func_020084d8(6, 1) == 0);
    func_0200848c(6, &func_0200b250);
}
