#include "m2c.h"

s32 func_02087398(s32);                             /* extern */
M2C_UNK func_02087434(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0208b044();                            /* extern */
s32 func_0208f740();                                /* extern */
void *func_02090a40();                              /* extern */
extern M2C_UNK data_0211d694;

void func_0208e1f8(void) {
    M2C_UNK var_r6;
    M2C_UNK var_r7;
    s32 temp_r4;
    void *temp_r5;

    func_02087434(1, &data_0211d694, 0);
    if (func_0208f740() != 0) {
        return;
    }
    func_0208b044();
    if (M2C_FIELD(func_02090a40(), s32 *, 0x20C) != 0) {
        var_r6 = 1;
    } else if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 2) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    if (M2C_FIELD(func_02090a40(), s32 *, 0x20C) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    temp_r5 = func_02090a40();
    temp_r4 = func_02087398(M2C_FIELD(func_02090a40(), s32 *, 0x20C));
    M2C_FIELD(temp_r5, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
              0x464)(0, 1, var_r7, var_r6, temp_r4, M2C_FIELD(func_02090a40(), s32 *, 0x468));
    M2C_FIELD(func_02090a40(), s8 *, 0x1A9) = 0;
}
