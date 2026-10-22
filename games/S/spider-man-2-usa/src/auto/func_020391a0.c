/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038e30(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_0215d738;
extern void **data_0215d73c;

s32 func_020391a0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r1;
    void *temp_r3;
    void *var_r1;

    data_0215d738 = arg2;
    temp_r3       = *data_0215d73c;
    temp_r1       = M2C_FIELD(temp_r3, s32 *, 4);
    if (temp_r1 != 0) {
        var_r1 = temp_r3 + temp_r1;
    } else {
        var_r1 = NULL;
    }
    func_02038e30(arg0, var_r1, arg1);
    return data_0215d738 - arg2;
}
