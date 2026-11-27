#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020cc620;

u8 func_0204e068(M2C_UNK arg0) {
    u8 var_r0;
    u8 var_r0_2;

    if (func_02012a90(arg0, 1) == 0) {
        var_r0_2 = M2C_FIELD(&data_020cc620, u8 *, 0xB41);
        if (var_r0_2 == 0xFF) {
            var_r0_2 = 0x80;
        }
        return var_r0_2;
    }
    var_r0 = M2C_FIELD(&data_020cc620, u8 *, 0xB42);
    if (var_r0 == 0xFF) {
        var_r0 = 0;
    }
    return var_r0;
}
