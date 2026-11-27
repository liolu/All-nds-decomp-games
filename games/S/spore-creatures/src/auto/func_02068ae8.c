#include "m2c.h"

M2C_UNK func_02088554();                            /* extern */
s32 func_020886e8();                                /* extern */
M2C_UNK func_02088750();                            /* extern */
extern M2C_UNK data_020e10ac;

s32 func_02068ae8(void) {
    s32 var_r4;

    var_r4 = 0;
    func_02088554();
    if (func_020886e8() != 0) {
        func_02088554();
        func_02088750();
        var_r4                                 = 1;
        M2C_FIELD(&data_020e10ac, s8 *, 0x32C) = 1;
    }
    return var_r4;
}
