#include "m2c.h"

M2C_UNK func_0203b29c();                            /* extern */
M2C_UNK func_0203b3a8(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0203b3f4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0215fb98;
extern M2C_UNK func_0203ff2c;

void func_0203fe18(void) {
    if (M2C_FIELD(&data_0215fb98, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0215fb98, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0215fb98, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x18) = 0;
    func_0203b29c();
    do {

    } while (func_0203b3f4(5, 1) == 0);
    func_0203b3a8(5, &func_0203ff2c);
}
