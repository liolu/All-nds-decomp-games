#include "m2c.h"

M2C_UNK func_02083a64(s32, M2C_UNK);                /* extern */
s32 func_02087398(s32);                             /* extern */
M2C_UNK func_02087434(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0208b044();                            /* extern */
M2C_UNK func_0208e5f0();                            /* extern */
void *func_02090a40();                              /* extern */
extern M2C_UNK data_0211d694;

void func_0208a2c8(s32 arg0, M2C_UNK arg1) {
    M2C_UNK var_r7;
    M2C_UNK var_r8;
    s32 temp_r5;
    void *temp_r6;

    if ((func_02090a40() != NULL) && (arg0 != 0)) {
        func_0208e5f0();
        func_02083a64(arg0, arg1);
        func_02087434(1, &data_0211d694, 0);
        if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 2) {
            var_r7 = 1;
        } else {
            var_r7 = 0;
        }
        if (M2C_FIELD(func_02090a40(), s32 *, 0x20C) == 0) {
            var_r8 = 1;
        } else {
            var_r8 = 0;
        }
        temp_r6 = func_02090a40();
        temp_r5 = func_02087398(M2C_FIELD(func_02090a40(), s32 *, 0x20C));
        M2C_FIELD(temp_r6, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
                  0x464)(arg0, 0, var_r8, var_r7, temp_r5, M2C_FIELD(func_02090a40(), s32 *, 0x468));
        func_0208b044();
    }
}
