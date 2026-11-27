#include "m2c.h"

M2C_UNK func_02040b1c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void *func_0203f624(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02040b1c(arg0, arg2, arg1, 2);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s16 *, 0xC8) = 0x70;
    M2C_FIELD(arg0, s16 *, 0xCA) = 0;
    return arg0;
}
