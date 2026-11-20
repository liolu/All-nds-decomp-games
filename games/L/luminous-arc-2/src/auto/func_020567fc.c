#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02078f08();                                /* extern */
M2C_UNK func_02078f64();                            /* extern */
M2C_UNK func_020ca99c();                            /* extern */
extern u8 data_02151424;
extern M2C_UNK data_02158048;

void func_020567fc(void) {
    if (data_02151424 != 0) {
        return;
    }
    if (!(func_02078f08() & 8)) {
        return;
    }
    func_02078f64();
    func_020ca99c();
    func_0206c4b4(0, 5, 0x7F, 0, 0, 0x100);
    M2C_FIELD(&data_02158048, s8 *, 1) = 0x43;
}
