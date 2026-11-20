#include "m2c.h"

M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;
extern M2C_UNK data_02175a4c;

void func_020562c8(void) {
    if ((M2C_FIELD(&data_02175a4c, u8 *, 0x22C) & 0x10) == 0x10) {
        M2C_FIELD(&data_0216bccc, s8 *, 0x52) = 0xB;
        M2C_FIELD(&data_02158048, u8 *, 1)    = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
        M2C_FIELD(&data_0216bccc, s8 *, 0x4A) = 1;
        func_02056b10(0);
        func_020cc3fc(0x1C, 1, 2);
        M2C_FIELD(&data_02158048, u8 *, 1) = 0x3FU;
        return;
    }
    M2C_FIELD(&data_0216bccc, s8 *, 0x52) = 0x29;
    M2C_FIELD(&data_02158048, u8 *, 1)    = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
    M2C_FIELD(&data_0216bccc, s8 *, 0x4A) = 1;
    func_02056b10(0);
}
