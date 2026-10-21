#include "m2c.h"

M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_0205884c();                            /* extern */
s32 func_02078f08();                                /* extern */
s32 func_02078f24();                                /* extern */
M2C_UNK func_02078f64();                            /* extern */
extern u8 data_02151424;
extern M2C_UNK data_02158048;

void func_020566e8(void) {
    if (func_02078f24() == 0) {
        func_0205884c();
        M2C_FIELD(&data_02158048, s8 *, 1) = 6;
        func_02056b10(1);
        return;
    }
    if (data_02151424 != 0) {
        return;
    }
    if (!(func_02078f08() & 8)) {
        return;
    }
    func_02078f64();
    func_0205884c();
    M2C_FIELD(&data_02158048, s8 *, 1) = 6;
    func_02056b10(1);
}
