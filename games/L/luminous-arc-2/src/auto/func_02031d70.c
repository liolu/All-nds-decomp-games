#include "m2c.h"

extern M2C_UNK data_02182a4c;

void func_02031d70(s32 arg0) {
    s32 var_r2;

    var_r2 = M2C_FIELD(&data_02182a4c, s32 *, 0x838) + arg0;
    if (var_r2 > 0x98967F) {
        var_r2 = 0x98967F;
    }
    M2C_FIELD(&data_02182a4c, s32 *, 0x838) = var_r2;
}
