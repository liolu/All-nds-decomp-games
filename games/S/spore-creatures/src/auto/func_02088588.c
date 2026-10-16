#include "m2c.h"

s32 func_02088554();                                /* extern */
M2C_UNK func_02088694(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020e69c0;

void func_02088588(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 <= 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0x7F) {
        var_r4 = 0x7F;
    }
    M2C_FIELD(&data_020e69c0, s32 *, 0xA0) = var_r4;
    func_02088694(func_02088554(), var_r4, 0);
}
