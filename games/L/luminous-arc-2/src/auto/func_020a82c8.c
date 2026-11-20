#include "m2c.h"

M2C_UNK func_02018e4c(s32, M2C_UNK *, s32);         /* extern */
s32 func_0201b47c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0212d960;

void func_020a82c8(s32 *arg0, M2C_UNK *arg1, s32 *arg2) {
    M2C_UNK *var_r7;
    s32 temp_r5;

    var_r7 = arg1;
    if (var_r7 == NULL) {
        var_r7 = &data_0212d960;
    }
    temp_r5 = func_0201b47c(var_r7) + 1;
    func_02018e4c(*arg0, var_r7, temp_r5);
    *arg2 += temp_r5;
    *arg0 += temp_r5;
}
