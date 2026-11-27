#include "m2c.h"

extern M2C_UNK data_0209b4a8;

s32 func_02012594(s32 *arg0, s32 arg1) {
    s8 var_r2;

    if (arg1 == 0x62) {
        var_r2 = 6;
    } else {
        var_r2 = ((s8 *) &data_0209b4a8)[arg1];
    }
    *arg0 += var_r2;
    return 2;
}
