#include "m2c.h"

s32 func_0209f92c();                                /* extern */
s32 func_0209f940(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209fca4(M2C_UNK, s32, M2C_UNK, s32);  /* extern */
M2C_UNK func_0209fd60(M2C_UNK, s32, s32);           /* extern */

void func_0209f8d0(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    M2C_UNK var_r2;
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = func_0209f92c();
    temp_r5 = func_0209f940(arg0, arg2);
    var_r2  = 1;
    if (!(arg3 & 1)) {
        func_0209fd60(arg0, temp_r4, temp_r5);
        var_r2 = 0;
    }
    func_0209fca4(arg0, temp_r4, var_r2, temp_r5);
}
