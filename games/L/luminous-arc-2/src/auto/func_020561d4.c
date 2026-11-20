#include "m2c.h"

M2C_UNK func_0205831c();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s8 func_02078f08();                                 /* extern */
M2C_UNK func_02078f64();                            /* extern */
M2C_UNK func_020ca99c();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern u8 data_02151424;
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;
extern M2C_UNK data_02175a4c;

void func_020561d4(void) {
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r5;

    temp_r4 = M2C_FIELD(&data_0216bccc, u8 *, 0x54);
    if (temp_r4 == 2) {
        temp_r5 = M2C_FIELD(&data_0216bccc, u8 *, 0x5B);
        func_0205831c();
        M2C_FIELD(&data_0216bccc, u8 *, 0x5B) = temp_r5;
        M2C_FIELD(&data_0216bccc, u8 *, 0x54) = temp_r4;
        func_020caa3c(3, 0, 8);
        M2C_FIELD(&data_02158048, u8 *, 1) = 0x45U;
        return;
    }
    if (data_02151424 != 0) {
        return;
    }
    if (!(func_02078f08() & 8)) {
        return;
    }
    temp_r4_2                              = M2C_FIELD(&data_0216bccc, u8 *, 0x54);
    M2C_FIELD(&data_02175a4c, s8 *, 0x22C) = func_02078f08();
    func_02078f64();
    func_020ca99c();
    func_0205831c();
    func_0206c4b4(0, 5, 0x7F, 0, 0, 0x100);
    M2C_FIELD(&data_0216bccc, u8 *, 0x54) = temp_r4_2;
    func_020caa3c(3, 0, 8);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
