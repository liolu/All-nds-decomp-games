#include "m2c.h"

M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_0205831c();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02078f08();                                /* extern */
M2C_UNK func_02078f64();                            /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_02055d60(void) {
    if (!(func_02078f08() & 8)) {
        return;
    }
    func_02078f64();
    func_0205831c();
    M2C_FIELD(&data_0216bccc, s8 *, 0x54) = 2;
    func_0206c4b4(0, 5, 0x7F, 0, 0, 0x100);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
    func_02056b10(3);
}
