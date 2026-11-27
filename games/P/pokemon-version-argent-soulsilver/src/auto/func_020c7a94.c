#include "m2c.h"

s32 func_020d5da4(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s8 data_021dd440;
extern M2C_UNK data_021dd480;

s32 func_020c7a94(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if ((s32) data_021dd440 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = (data_021dd440 * 0x11E0) + (s32) &data_021dd480;
    }
    if (var_r0 == 0) {
        return 0;
    }
    return func_020d5da4(var_r0, arg0, arg1);
}
