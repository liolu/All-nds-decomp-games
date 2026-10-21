#include "m2c.h"

M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_0205884c();                            /* extern */
s32 func_02058f40();                                /* extern */
extern M2C_UNK data_02158048;

void func_020544e4(void) {
    if (func_02058f40() != 1) {
        return;
    }
    func_0205884c();
    M2C_FIELD(&data_02158048, s8 *, 1) = 0x10;
    func_02056b10(1);
}
