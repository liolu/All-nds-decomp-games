/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02027564(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_020d0274;
extern void **data_020d0278;

s32 func_0202760c(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r1;
    void *temp_r3;
    void *var_r1;

    data_020d0274 = arg2;
    temp_r3       = *data_020d0278;
    temp_r1       = M2C_FIELD(temp_r3, s32 *, 4);
    if (temp_r1 != 0) {
        var_r1 = temp_r3 + temp_r1;
    } else {
        var_r1 = NULL;
    }
    func_02027564(arg0, var_r1, arg1);
    return data_020d0274 - arg2;
}
