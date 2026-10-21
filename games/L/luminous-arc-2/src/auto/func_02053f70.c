#include "m2c.h"

M2C_UNK func_0205884c();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_02053f70(void) {
    func_0205884c();
    func_0206c4b4(5, 0, 0, 0, 0x1E, 0x100);
    func_020caa3c(3, 1, 4);
    M2C_FIELD(&data_0216bccc, s8 *, 0x55) = 0;
    M2C_FIELD(&data_0216bccc, s8 *, 0x4D) = -1;
    M2C_FIELD(&data_02158048, u8 *, 1)    = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
