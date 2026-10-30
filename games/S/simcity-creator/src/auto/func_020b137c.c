#include "m2c.h"

extern u8 data_020d0214;
extern M2C_UNK data_020d021c;

s32 func_020b137c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < 0) {
        var_r0 = (s32) data_020d0214;
    }
    return *((M2C_UNK *) ((s8 *) &data_020d021c + (var_r0 * 4)));
}
