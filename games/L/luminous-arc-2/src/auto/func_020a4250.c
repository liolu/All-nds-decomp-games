#include "m2c.h"

M2C_UNK func_02058930(M2C_UNK);                     /* extern */
M2C_UNK func_02084acc();                            /* extern */
extern M2C_UNK data_0217296c;

void func_020a4250(void *arg0) {
    if (M2C_FIELD(&data_0217296c, s32 *, 0xE8C) == 7) {
        func_02058930(0xB);
        M2C_FIELD(arg0, u8 *, 0x77B) = 0x23U;
    }
    func_02084acc();
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
