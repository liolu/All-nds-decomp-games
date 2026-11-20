#include "m2c.h"

extern M2C_UNK data_02090b44;

s32 func_02069864(void *arg0, s32 arg1) {
    s32 (*temp_r2)(arg0, arg1);
    s32 temp_r3;
    s32 var_ip;

    temp_r3 = M2C_FIELD(arg0, s32 *, 4);
    var_ip  = 0;
    if (temp_r3 >= 6) {
        return 0;
    }
    temp_r2 = *((M2C_UNK *) ((s8 *) &data_02090b44 + (temp_r3 * 4)));
    if (temp_r2 != NULL) {
        var_ip = temp_r2(arg0, arg1);
    }
    return var_ip;
}
