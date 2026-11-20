#include "m2c.h"

M2C_UNK func_0205831c();                            /* extern */
M2C_UNK func_02078f34();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_02056480(void) {
    u8 temp_r4;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(&data_0216bccc, u8 *, 0x54);
    if (temp_r5 == 2) {
        temp_r4 = M2C_FIELD(&data_0216bccc, u8 *, 0x5B);
        func_0205831c();
        M2C_FIELD(&data_0216bccc, u8 *, 0x5B) = temp_r4;
        M2C_FIELD(&data_0216bccc, u8 *, 0x54) = temp_r5;
        func_020caa3c(3, 0, 8);
        M2C_FIELD(&data_02158048, u8 *, 1) = 0x45U;
        return;
    }
    func_02078f34();
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
