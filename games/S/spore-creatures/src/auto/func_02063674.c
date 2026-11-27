#include "m2c.h"

M2C_UNK func_02093234(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209b18c(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_020e0f14;

M2C_UNK *func_02063674(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 < 0) {
        var_r4 *= -1;
    }
    func_02093234(&data_020e0f14, 0, 0x20, 8);
    func_0209b18c(var_r4, &data_020e0f14);
    return &data_020e0f14;
}
