#include "m2c.h"

extern M2C_UNK data_02181d18;

u8 func_020d5850(s32 arg0) {
    u8 var_r0;

    var_r0 = ((s8 *) &data_02181d18)[arg0];
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
