#include "m2c.h"

M2C_UNK func_020017e0(s32, M2C_UNK);                /* extern */
M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_0205884c();                            /* extern */
M2C_UNK func_02078dc8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02078f24();                                /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_02053a94(void) {
    func_02078dc8(2, 0, 2);
    if (func_02078f24() == 0) {
        func_0205884c();
        M2C_FIELD(&data_02158048, u8 *, 1)    = 0x40U;
        M2C_FIELD(&data_0216bccc, s8 *, 0x4A) = 1;
        M2C_FIELD(&data_0216bccc, s8 *, 0x52) = 0xC;
        func_02056b10(0);
        func_020017e0(0x0400006C, 0);
        func_020017e0(0x0400106C, 0);
        return;
    }
    M2C_FIELD(&data_0216bccc, s8 *, 0x55) = 0;
    M2C_FIELD(&data_0216bccc, s8 *, 0x56) = 0;
    M2C_FIELD(&data_02158048, u8 *, 1)    = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
