#include "m2c.h"

s32 func_02056ae4(M2C_UNK);                         /* extern */
M2C_UNK func_0205884c();                            /* extern */
M2C_UNK func_02058930(M2C_UNK);                     /* extern */
M2C_UNK func_020596e8();                            /* extern */
M2C_UNK func_02059c68();                            /* extern */
s32 func_02078f08();                                /* extern */
M2C_UNK func_02078f64();                            /* extern */
extern u8 data_02151424;
extern M2C_UNK data_02158048;

void func_02054480(void) {
    if (data_02151424 != 0) {
        return;
    }
    if (!(func_02078f08() & 8)) {
        return;
    }
    if (func_02056ae4(0x10) == 0) {
        return;
    }
    func_02078f64();
    func_0205884c();
    func_020596e8();
    func_02059c68();
    func_02058930(0x17);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
