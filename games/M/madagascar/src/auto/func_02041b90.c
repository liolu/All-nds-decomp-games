/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d00a8;

s32 func_02041b90(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x1E4) != 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0)) {
        var_r2 = M2C_FIELD(&data_020d00a8, s32 *, 0x10) & 0xF0;
    }
    return var_r2;
}
