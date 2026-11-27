#include "m2c.h"

s32 func_02068ad8();                                /* extern */
M2C_UNK func_02088554();                            /* extern */
M2C_UNK func_02088760();                            /* extern */
extern M2C_UNK data_020e10ac;

s32 func_02068b20(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02068ad8() != 0) {
        func_02088554();
        func_02088760();
        var_r4                                 = 1;
        M2C_FIELD(&data_020e10ac, s8 *, 0x32C) = 0;
    }
    return var_r4;
}
