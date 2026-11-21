#include "m2c.h"

s32 func_02098268(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_02098b30(void *);                      /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_02098ae0(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r4;

    var_r4 = arg2;
    if (var_r4 == 0) {
        var_r4 = M2C_FIELD(arg0, s32 *, 8);
    }
    func_02098b30(arg0);
    M2C_FIELD(arg0, s32 *, 0) = func_02098268(M2C_FIELD(&data_020d3cc4, s32 *, 0x24), arg1, var_r4);
    var_r0                    = 1;
    M2C_FIELD(arg0, s8 *, 4)  = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
