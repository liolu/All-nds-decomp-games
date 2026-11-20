#include "m2c.h"

M2C_UNK func_0203b29c();                            /* extern */
M2C_UNK func_0203b3a8(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0203b3f4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0215faf0;
extern M2C_UNK func_0203e964;

void func_0203ebe4(void) {
    if (M2C_FIELD(&data_0215faf0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0215faf0, u16 *, 0) = 1U;
    func_0203b29c();
    M2C_FIELD(&data_0215faf0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_0215faf0, s32 *, 4)    = 0;
    M2C_FIELD(&data_0215faf0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0215faf0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0215faf0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_0215faf0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_0215faf0, s16 *, 0x38) = 0;
    do {

    } while (func_0203b3f4(6, 1) == 0);
    func_0203b3a8(6, &func_0203e964);
}
