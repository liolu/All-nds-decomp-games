#include "m2c.h"

s32 func_02056ae4(M2C_UNK);                         /* extern */
M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_0205884c();                            /* extern */
M2C_UNK func_020595c8();                            /* extern */
M2C_UNK func_02059bb0(M2C_UNK);                     /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02078dc8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_02052a3c(void) {
    if (func_02056ae4(8) == 0) {
        return;
    }
    func_0205884c();
    if (M2C_FIELD(&data_0216bccc, s8 *, 0x4A) == 1) {
        M2C_FIELD(&data_02158048, u8 *, 1)    = 0xAU;
        M2C_FIELD(&data_0216bccc, s8 *, 0x53) = 0;
        func_02056b10(1);
        func_02078dc8(1, 1, 2);
        M2C_FIELD(&data_0216bccc, s8 *, 0x54) = 1;
        func_020595c8();
        func_02059bb0(1);
        return;
    }
    if (M2C_FIELD(&data_0216bccc, s8 *, 0x4A) == 2) {
        M2C_FIELD(&data_02158048, u8 *, 1) = 0x10U;
        func_02056b10(1);
        M2C_FIELD(&data_0216bccc, s8 *, 0x54) = 2;
        return;
    }
    func_0206c4b4(5, 0, 0, 0, 0x1E, 0x100);
    func_020caa3c(3, 1, 8);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
