#include "m2c.h"

s32 func_02005490();                                /* extern */
s32 func_020054cc();                                /* extern */
s32 func_02005508();                                /* extern */
s32 func_02005544();                                /* extern */
s32 func_020059d4();                                /* extern */
M2C_UNK func_02005b2c();                            /* extern */
M2C_UNK func_020064f0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0202f1b8();                            /* extern */
s32 func_02094a80();                                /* extern */
extern M2C_UNK data_020e0bb8;
extern M2C_UNK data_020e0bcc;

void func_020058f4(void) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    func_020064f0(&data_020e0bcc, 0, 1, 0, 1);
    func_020064f0(&data_020e0bcc, 1, 1, 2, 0x2A);
    func_020064f0(&data_020e0bcc, 2, 3, 4, 0x22);
    func_020064f0(&data_020e0bcc, 3, 3, 4, 0x58);
    temp_r6                             = func_02005490();
    temp_r5                             = func_020054cc();
    temp_r4                             = func_02005508();
    M2C_FIELD(&data_020e0bb8, s32 *, 4) = (s32) (func_02005544() + ((temp_r4 + (temp_r6 + temp_r5)) << 8));
    M2C_FIELD(&data_020e0bb8, s8 *, 0)  = 0;
    if (func_02094a80() == 0) {
        func_0202f1b8();
    }
    if (func_020059d4() != 0) {
        return;
    }
    func_02005b2c();
}
