#include "m2c.h"

M2C_UNK func_0205884c();                            /* extern */
s32 func_02058f40();                                /* extern */
extern M2C_UNK data_02158048;

void func_02056788(void) {
    if (func_02058f40() != 1) {
        return;
    }
    func_0205884c();
    M2C_FIELD(&data_02158048, s8 *, 1) = 0x3D;
}
