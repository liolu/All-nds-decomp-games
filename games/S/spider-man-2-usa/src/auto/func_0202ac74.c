/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0207a6d4;
extern M2C_UNK data_0215b3d4;
extern M2C_UNK data_0215b4a0;

M2C_UNK *func_0202ac74(void *arg0) {
    M2C_UNK *var_r3;
    s32 var_r2;

    var_r3 = &data_0207a6d4;
    var_r2 = 1;
    if ((M2C_FIELD(&data_0215b3d4, s32 *, 0x64) != 0xE) && (M2C_FIELD(&data_0215b3d4, s32 *, 0x64) != 0x13)) {
        var_r2 = 0;
    }
    if ((var_r2 != 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0)) {
        var_r3 = &data_0215b4a0;
    }
    return var_r3;
}
