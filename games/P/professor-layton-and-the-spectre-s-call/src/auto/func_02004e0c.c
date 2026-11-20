#include "m2c.h"

s32 func_0201732c();                                /* extern */
M2C_UNK func_02017340(s32);                         /* extern */
s32 func_02004468(s32);                             /* extern */
s32 func_02004710(M2C_UNK);                         /* extern */
M2C_UNK func_02004738(M2C_UNK, M2C_UNK);            /* extern */

void func_02004e0c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_0201732c();
    temp_r4 = func_02004468(arg1);
    if (arg0 == func_02004710(arg2)) {
        func_02004738(arg2, 0);
    }
    func_02004468(temp_r4);
    func_02017340(temp_r5);
}
