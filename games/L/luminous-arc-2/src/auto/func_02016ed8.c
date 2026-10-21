#include "m2c.h"

M2C_UNK MBi_StartParentCore();

extern M2C_UNK data_02150880;

s32 func_02011198(s32);

M2C_UNK func_0201735c(M2C_UNK, s32);

M2C_UNK func_02016ed8();

s32 func_02016ed8(void) {
    s32 var_r4;

    var_r4 = func_02011198(M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s32 *, 0x508));
    func_0201735c(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
