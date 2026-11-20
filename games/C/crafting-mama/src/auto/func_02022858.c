#include "m2c.h"

M2C_UNK func_02016c40(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0201865c(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02018afc(s32, M2C_UNK);                /* extern */
s32 func_0201e240(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_0202274c();                                /* extern */
extern M2C_UNK data_020960f4;

s32 func_02022858(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;

    temp_r0 = func_0202274c();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02016c40(arg0, temp_r0, arg1);
    func_02018afc(temp_r0, arg1);
    temp_r4 = func_0201e240(0xA, temp_r0, 0);
    func_0201865c(&data_020960f4, temp_r0, 1);
    var_r0 = 8;
    if (temp_r4 >= 0) {
        var_r0 = 2;
    }
    return var_r0;
}
